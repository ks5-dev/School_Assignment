const
  Inp = 'TEST6.INP';
  Out = 'TEST6.OUT';
  MaxLongInt = 2147483647;
var
  Min, Max: array[1..5000] of LongInt;
  m, n: Integer;
procedure ReadInput;
var
  i, j, k: Integer;
  hf: Text;
begin
  Assign(hf, Inp);
  Reset(hf);
  Readln(hf, m, n);
  for i := 1 to m do Min[i] :=  MaxLongInt;
  for j := 1 to n do Max[j] := -MaxLongInt;
  for i := 1 to m do
  begin
    for j := 1 to n do
    begin
      Read(hf, k);
      if Min[i] > k then Min[i] := k;
      if Max[j] < k then Max[j] := k;
    end;
    Readln(hf);
  end;
  Close(hf);
end;
procedure WriteOutput;
var
  i, j: Integer;
  Result: Boolean;
  hf: Text;
begin
  Result := False;
  Assign(hf, Out);
  Rewrite(hf);
  Writeln(hf, 'Cac phan tu yen ngua la: ');
  for i := 1 to m do
    for j := 1 to n do
      if Min[i] = Max[j] then
      begin
        Result := True;
        Write(hf, '(', i, ',', j, '); ');
      end;
  if not Result then
  begin
    Rewrite(hf);
    Write(hf, 'Khong co phan tu yen ngua');
  end;
  Close(hf);
end;
begin
  ReadInput;
  WriteOutput;
end.
