# Anagram Checker
def are_anagram(word1, word2):
    """
    Checks if two words are anagrams of each other.
    
    :param word1: str - First word
    :param word2: str - Second word
    :return: bool - True if the words are anagrams, False otherwise
    """
    if len(word1) != len(word2):
        return False
    
    if word1 == word2:
        return True
    
    dict1 = {}
    dict2 = {}
    
    for letter in word1:
        if letter in dict1:
            dict1[letter] += 1
        else:
            dict1[letter] = 1
    
    for letter in word2:
        if letter in dict2:
            dict2[letter] += 1
        else:
            dict2[letter] = 1
    
    return dict1 == dict2
    

# Test Cases
def test_are_anagram():
    test_cases = [
        ("roma", "amor", True),
        ("python", "typhon", True),
        ("hola", "halo", True),
        ("listen", "silent", True),
        ("rat", "tar", True),
        ("hello", "world", False),
        ("night", "thing", True),
        ("abc", "def", False),
        ("aabbcc", "abcabc", True),
        ("", "", True),  # Two empty strings are anagrams
        ("a", "a", True),
        ("a", "b", False),
        ("abcd", "abc", False),  # Different lengths
    ]
    
    for i, (word1, word2, expected) in enumerate(test_cases):
        result = are_anagram(word1, word2)
        assert result == expected, f"FAILED on case {i + 1}: expected {expected}, but got {result}"
    print("All tests PASSED.")

# Run Tests
if __name__ == "__main__":
    test_are_anagram()
