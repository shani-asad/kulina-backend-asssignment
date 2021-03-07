## Pseudocode for algorithm question no.3

```go
init function countDigit(number): // function to get number of digits in a number
    init count = 0
    for number not equal 0:
        set number = number / 10
        set count = count + 1
    return count

init function main():
    init number = 1345679
    init n = countDigit(number)

    for i = 1 until i = n:
        init divider = 1
        init a = n - i
        init b = n - i

        for a greater than 0:
            set divider = divider * 10
            set a = a - 1
        
        init ones = number / divider
        init modder = ones / 10

        if modder equals 1: set modder = 10
        if modder not equal 0: set ones = ones % modder // get the first digit of the number to be printed

        for b greater than 0:
            set ones = ones * 10 // add zeros to the number to be printed
            set b = b-1

        print ones // print the result

        set i = i + 1
```
