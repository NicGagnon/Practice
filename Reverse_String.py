def FirstReverse(str): 
    if str == "":
        return ""
    # code goes here 
    return str[-1] + FirstReverse(str[0:len(str)-1])
    
# keep this function call here  
print FirstReverse(raw_input())
