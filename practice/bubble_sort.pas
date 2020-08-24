PROGRAM Sorting(INPUT,OUTPUT);
CONST
    ArraySize = 6;
TYPE
    Range = 1..ArraySize;
    NumbersArray = ARRAY[Range] OF INTEGER;
VAR
    Numbers:NumbersArray;
    I, J , Pot :INTEGER;
BEGIN
{ Input array }
    FOR I := 1 TO ArraySize DO
    BEGIN
        WRITE('Enter element #', I,': ');
        READLN(Numbers[I])
    END;
{ Sort the array }

    FOR I := 1 TO ArraySize-1 DO
    { outer loop }
        BEGIN
            FOR J := I+1 TO ArraySize DO
            { inner loop }  
                BEGIN
                    IF Numbers[I] > Numbers[J] THEN
                        BEGIN
                        { swap contents }
                            Pot := Numbers[J];
                            Numbers[J] := Numbers[I];
                            Numbers[I] := Pot
                        END
                END
            { end of inner loop }
    END;
{ end of outer loop }
{ Display Results }
    WRITELN;
    WRITELN('The sorted array is:');
    FOR I := 1 TO ArraySize DO
        WRITELN(Numbers[I]);
        WRITELN('Press ENTER to continue..');
    READLN
END.
