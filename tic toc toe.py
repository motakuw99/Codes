def showboard():

    print(board[0],'|',board[1],'|',board[2])
    print(board[3],'|',board[4],'|',board[5])
    print(board[6],'|',board[7],'|',board[8])

board=[0,1,2,3,4,5,6,7,8]
print("LET'S START!!")

a=input(str("Player 1, what's your name??  "))
b=input(str("Player 2, what's your name??  "))

print(a, 'is X and' ,b, 'is O, Ok?? :D ')


showboard()

def checkboard():
    
            if  (board[0]and board[1]and board[2])=='x' or(board[3]and board[4]and board[5])=='x'or(board[6]and board[7]and board[8])=='x'or(board[0]and board[3]and board[6])=='x'or(board[1]and board[4]and board[7])=='x'or(board[2]and board[5]and board[8])=='x'or(board[0]and board[4]and board[8])=='x'or(board[2]and board[4]and board[6])=='x':
               print('WINNER IS ',a, ' \(^O^)/')
               
 



            if(board[0]and board[1]and board[2])=='o'or(board[3]and board[4]and board[5])=='o'or(board[6]and board[7]and board[8])=='o'or(board[0]and board[3]and board[6])=='o'or(board[1]and board[4]and board[7])=='o'or(board[2]and board[5]and board[8])=='o'or(board[0]and board[4]and board[8])=='o'or(board[2]and board[4]and board[6])=='o':
               print('WINNER IS ',b, ' \(^O^)/')
            

          
            

                                          
       

while True:
    
    P1=int(input(' Please pick a spot(0-8):'))
    if board[P1]!='x' and board[P1]!='o':
        board[P1]='x'
        checkboard()
        showboard()
 
    else:
        print("oops! it's taken!!")
        showboard()
    
    P2=int(input(' Please pick a spot(0-8):'))
    if board[P2]!='x' and board[P2]!='o':
        board[P2]='o'
        checkboard()
        showboard()
    else:
        print("oops! it's taken!!")
        showboard()

