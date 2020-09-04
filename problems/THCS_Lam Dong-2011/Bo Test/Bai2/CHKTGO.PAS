uses crt,dos;

const
    dtfi='THANHGO.IN';
    dtfo='THANHGO.OU';
    dtfm='THANHGO.AN';
    kqm: array[0..9] of integer=(545,9,12,20,212,101,26,11,89,14);

var
   Error: array[0..9] of integer;
   Diem: array[0..9] of real;
   p: integer;
   tfi,tfo,tfm: string[12];
   d: SearchRec;
   fi,fo,fm: text;

   N: integer;
   a: array[1..50] of integer;

procedure Docdl;
var i: integer;
begin
   assign(fi,tfi); reset(fi);
   read(fi,N);
   for i:=1 to N do read(fi,a[i]);
   close(fi);
end;

procedure Cham;
var Sp,kqo,i,T,u: integer;
    x: array[1..50] of byte;
begin
   readln(fo,kqo);
   Sp:=0;
   for i:=1 to N do x[i]:=0;
   while not seekeof(fo) do
      begin
         inc(sp);
         T:=0;
         while not seekeoln(fo) do
            begin
               read(fo,u);
               if (u<1) or (u>N) then
                  begin
                     error[p]:=3; {Chi so khong hop le}
                     exit;
                  end;
               if x[u]<>0 then
                  begin
                     error[p]:=4;  {Co Thanh go chon 2 lan}
                     exit;
                  end;
               x[u]:=1;
               T:=T+a[u];
            end;
         readln(fo);
         if T<>kqo then
            begin
               error[p]:=5; {Do dai 1 doan khong hop le}
               exit;
            end;
      end;
   if kqo>kqm[p] then
      begin
         error[p]:=6; {Cach chia chua toi uu}
         diem[p]:=int(kqm[p]/kqo*10)/10;
         exit;
      end;
   if kqo<kqm[p] then
      begin
         error[p]:=7; {Good!. Toi uu hon mau}
      end;
   diem[p]:=1.0;
end;

procedure InError(p: LongInt);
begin
   textcolor(red);
   case Error[p] of
      0: writeln;
      1: writeln('Khong co file OUTPUT');
      2: writeln('Loi doc file OUTPUT');
      3: writeln('Chi so khong hop le');
      4: writeln('Co Thanh go chon 2 lan');
      5: writeln('Do dai 1 doan khong hop le');
      6: writeln('Cach chia chua toi uu');
      7: writeln('Good!. Toi uu hon mau');
   end;
   textcolor(white);
end;

procedure Inkq;
var T: real;
begin
   clrscr;
   writeln;
   writeln;
   writeln;
   textcolor(white);
   writeln('         ********************************************************');
   writeln('         *          Ket qua cham bai                            *');
   writeln('         ********************************************************');
   T:=0.0;
   for p:=0 to 9 do
      begin
         write('              TEST ',p,': ',Diem[p]:4:1,' Diem.');
         InError(p);
         T:=T+diem[p];
      end;
   writeln('          --------------------------------------------------------');
   textcolor(green);
   writeln('          Tong cong = ',T:4:1,' Diem');
   textcolor(white);
end;

procedure XoaFile;
begin
   for p:=0 to 9 do
      begin
         tfo:=dtfo+chr(p+48);
         FindFirst(tfo,archive,d);
         if DosError<>0 then continue;
         assign(fo,tfo);
         erase(fo);
      end;
end;

BEGIN
   fillchar(Error,sizeof(Error),0);
   fillchar(Diem,sizeof(Diem),0);
   for p:=0 to 9 do
      begin
         tfi:=dtfi+chr(p+48);
         tfm:=dtfm+chr(p+48);
         tfo:=dtfo+chr(p+48);
         FindFirst(tfo,Archive,d);
         if DosError<>0 then
            begin
               Error[p]:=1;
               continue;
            end;
         Docdl;
         assign(fo,tfo); reset(fo);
         Cham;
         close(fo);
      end;
   Inkq;
   XoaFile;
END.