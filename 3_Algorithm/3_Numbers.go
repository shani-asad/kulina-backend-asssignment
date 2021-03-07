package main  
  
import "fmt"  
  
func countDigit(number int) int {  
 count := 0  
 for number != 0 {  
  number /= 10  
  count += 1  
 }  
 return count    
}

func main() {  
 number := 1345679

 n := countDigit(number)
 
 for i := 1; i <= n; i++ {
  divider := 1
  a := n-i
  b := n-i

  for a > 0 {
   divider *= 10
   a-=1
  }

  ones := number / divider

  modder := ones / 10
  if(modder == 1) {modder = 10}

  if(modder != 0) {ones %= modder}


  for b > 0 {
   ones *= 10
   b-=1
  }
  fmt.Printf("%d\n", ones)
 }
  
}  