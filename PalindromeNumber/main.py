def isPalindrome(x:int) -> bool:
    return str(x)[::-1] == str(x)

def test_isPalindrome():
    assert isPalindrome(121) is True
    assert isPalindrome(-121) is False
    assert isPalindrome(10) is False
