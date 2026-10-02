# FileIO
#CSV Reader

Read each line, add the numbers, and print the text that many times. 

def main():
  input: data.csv
  open data.csv
  for each line:
    create stringstream from line
    get first number up to comma
    get second number up to comma
    skip spaces and get text
    convert numbers to ints with stringstreams
    total = num1 + num2
    repeat total times:
      print text and a space
    print new line
  close file
  return 0 
