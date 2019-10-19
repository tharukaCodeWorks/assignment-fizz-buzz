 type Integer_array is Array (Natural range <>) of Integer;

 procedure Bubble_Sort (A : in out Integer_Array) is
    Temp : Integer;
 begin
    for I in reverse A'Range loop
       for J in A'First .. I loop
          if A(I) < A(J) then
             Temp := A(J);
             A(J) := A(I);
             A(I) := Temp;
          end if;
       end loop;
    end loop;
 end Bubble_Sort;