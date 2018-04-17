def LetterCapitalize(str): 
    tmp_string = ""
    splt_string = str.split()
    for string in splt_string:
        tmp_string += string[0].upper() + string[1:] + " "
    return tmp_string
    
# keep this function call here  
print LetterCapitalize(raw_input())
