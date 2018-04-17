#Changes letters 1 forward and vowels get capitalized
def LetterChanges(str): 
    alphabet_lower = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    vowel = ['a','e','i','o','u']
    str_list = list(str)
    return_str = ""
    
    for char in str_list:
        if char.lower() in alphabet_lower:
            tmp = alphabet_lower.index(char.lower())
            tmp = (tmp + 1) % 26
            if alphabet_lower[tmp] in vowel:
                return_str += alphabet_lower[tmp].upper()
            else: return_str += alphabet_lower[tmp]
        else: return_str += char
    return return_str
    
# keep this function call here  
print LetterChanges(raw_input())
