def romanToInt(s: str) -> int:
    roman_dict = {"M": 1000,
                  "D": 500,
                  "C": 100,
                  "L": 50,
                  "X": 10,
                  "V": 5,
                  "I": 1,
                  }
    num = []
    for letter in s:
        num.append(roman_dict[letter])
    for i in range(len(num)+1):
        for j in range(0,min(4,len(num)-i)):
            cp = num[i]
            np = num[i+j]
            if cp == np:
                next
            elif cp > np:
                break
            else:
                num[i] = - num[i]
                break
    return sum(num)


def test_romanToInt():
    assert romanToInt("III") == 3
    assert romanToInt("LVIII") == 58
    assert romanToInt("MCMXCIV") == 1994 


