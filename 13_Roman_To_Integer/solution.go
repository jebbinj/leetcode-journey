func romanToInt(s string) int {
    sum := 0
    for i := 0; i < len(s); i++ {
        if s[i] == 'I' {
            if i+1 < len(s) && (s[i+1] == 'V' || s[i+1] == 'X') {
                sum = sum - 1
            } else {
                sum = sum + 1
            }
        } else if s[i] == 'V' {
            sum = sum + 5
        } else if s[i] == 'X' {
            if i+1 < len(s) && (s[i+1] == 'L' || s[i+1] == 'C') {
                sum = sum - 10
            } else {
                sum = sum + 10
            }
        } else if s[i] == 'L' {
            sum = sum + 50
        } else if s[i] == 'C' {
            if i+1 < len(s) && (s[i+1] == 'D' || s[i+1] == 'M') {
                sum = sum - 100
            } else {
                sum = sum + 100
            }
        } else if s[i] == 'D' {
            sum = sum + 500
        } else if s[i] == 'M' {
            sum = sum + 1000
        }
    }
    return sum
}