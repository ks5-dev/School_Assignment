var a,b: array [1..100] of longint;
      N,i,k,ka,kb,cs: byte;
Function Prime(N: longint): boolean;
Var i: longint;
Begin
   If (N=0) or (N=1) then
      Prime:=false 
   Else
      Begin
         i:=2;
         While (N mod i <> 0) and (i <= Sqrt(N)) do Inc(i);
         If i > Sqrt(N) then
               Prime:=true   Else Prime:=false;
       End;
End;
BEGIN
    Write ('Nhap N: ');
    Readln (N);
    ka:=1;  a[ka]:=0;
    For i:=1 to N do
         Begin
            Kb:=0;
            For k:=1 to ka do
               For cs:=0 to 9 do
                  If Prime(a[k]*10+cs) then
                      Begin
                         Inc(kb);
                         b[kb]:=a[k]*10+cs;
                      end;
           ka:=kb;
           For k:=1 to ka do
              a[k]:=b[k]; end;
           For k:=1 to ka do
             Write(a[k]:10);
             Writeln;
    Writeln('Co tat ca',ka,'so sieu nguyen to co',N,'chu so.');
    Readln;
END.
