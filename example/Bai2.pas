Program BdFib;
uses crt;
var n:longint;
    f:array[1..1000] of longint;
    f1, f2:text;
function fib(k:integer): longint;
begin
     f[1]:=1;
     f[2]:=1;
     f[3]:=2;
     if f[k]=-1 then f[k]:=fib(k-1)+fib(k-2);
     fib:=f[k];
end;
procedure xuly;
var i,j:longint;
begin
     assign(f2,'test8.out');
     rewrite(f2);
     write(f2,n,' = ');
     for i:=1 to 1000 do f[i]:=-1;
     while n>0 do
     begin
          i:=1;
          while fib(i)<=n do
          inc(i);
          j:=fib(i-1);
          write(f2,j);
          n:=n-j;
          if n<>0 then write(f2,' + ');
     end;
     gotoxy(wherex-2,wherey);
     writeln(' ');
     close(f2);
end;
procedure test;
begin
     clrscr;
     assign(f1,'test8.inp');
     reset(f1);
     read(f1,n);
     close(f1);
     xuly;
end;

BEGIN
     test;
END.
