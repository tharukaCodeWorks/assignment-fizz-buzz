Program FizzBuzz
   do n = 1, 100     
        if (mod(n,3)==0 .and. mod(n, 5)==0) then      
            print*,  "Fizz Buzz" 
        else if (mod(n, 5)==0) then       
            print*,  "Buzz" 
        else if (mod(n,3)==0) then 
            print*,  "Fizz" 
        else
            print*, n
        end if
   end do 
End Program FizzBuzz
