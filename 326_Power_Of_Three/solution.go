// func isPowerOfThree(n int) bool {
//     if n <= 0 {
//         return false;
//     }
    
//     if n == 1 {
//         return true;
//     }
    
    
//     for m := 1 ; m < n ; {
//         m = m * 3
        
//         if m == n {
//             return true;
//         }
//     }
    
//     return false;
// }

func isPowerOfThree(n int) bool {
    if n <= 0 {
        return false;
    }
    
    if n == 1 {
        return true;
    }
    
    
    return n % 3 == 0 && isPowerOfThree(n / 3)
}


// func isPowerOfThree(n int) bool {

//     if n <= 0 {
//         return false
//     }

//     // 3^19 = 1162261467 is the largest power of 3 that fits in a 32-bit int
//     return 1162261467%n == 0
// }