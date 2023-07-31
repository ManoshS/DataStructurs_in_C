#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define N 5
int top=-1;
struct node{
	int info;
	struct node *link;
};
struct Tnode{
	int ele;
	struct Tnode *left;
	struct Tnode *right;
};
typedef struct node NODE;
typedef struct Tnode node;
NODE *start=NULL;
node *root=NULL;
int n=0;
void Graphs();
void helpTree();
void Trees();
void helpArray();
void helpStack();
void helpQueue();
void Help();
void Queue();
void displayScreen();
void Array();
void Stack();
void Queue();
void LList();
void infoDS();
void Linear()
{
	char ch;
	while(1){

	system("cls");
	printf("\tTypes Linear data structure\n");
	printf("**************************************\n");
	printf("1.Arrays\n");
	printf("2.Stack\n");
	printf("3.Queue                                          enter '?' to Help\n");
	printf("4.Linked List                                   enter ' h' to go to HOME \n");
	printf("5.Exit                                           \n");
	printf("\n \nEnter your choice:");
	ch=getche();
	switch(ch)
	{
		case '1':Array();
		break;
		case '2':Stack();
		break;
		case '3':Queue();
		break;
		case '4':LList();
		break;
		case'h':displayScreen();
		break;
		case '?':Help();
		break;
		case '5':exit(0);
		break;
		default:printf("Invalid choice plrase correct it \n");
		getch();
		Linear();
	}
}
	
}
void createArray(int A[])
{
	int i;
	printf("\nEnter the size of Array \n");
	scanf("%d",&n);
	printf("Enter the elements of Array \n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
}
void insertArray(int A[],int item,int pos)
{
	int i;
	if(pos>n){
		printf("Position not found\n");
	}
    else{
	
	for(i=n-1;i>=pos;i--)
	{
		A[i+1]=A[i];
	}
	A[pos]=item;
	n++;
	}
}
void deleteArray(int A[],int pos)
{
	int i;
	if(pos>=n){
		printf("Position not found\n");
	}
	for(i=pos;i<n;i++)
	{
		A[i]=A[i+1];
	}
	n--;
}
void displayArray(int A[])
{
	int i;
	printf("\nArray Elements are \n");
	for(i=0;i<n;i++)
	printf("%d\t",A[i]);
	
}

int isEmpty()
{
	if(n==0)
	return 1;
	else
	return 0;
}
int isFull()
{
	if(n==20)
	return 1;
	else
	return 0;
}
void linearSearch(int A[],int item)
{
	int i,pos=-1;
	if(n==0)
	{
	printf("\nArray is Empty\n");
	return;
}
		for(i=0;i<n;i++)
		if(A[i]==item)
		{
			pos=i;
			break;
		}
	
		if(pos==-1)
		printf("\nElement not found in Array \n");
		else
		printf("\n%d is present at position %d\n",item,pos+1);
	
	}
void binarySearch(int A[],int item)
{
	int i,pos=-1,b=0,e=n-1,mid;
	if(n==0)
	{
	printf("\nArray is Empty\n");
	return;
}
	while(b<=e)
	{
	mid=(b+e)/2;
	if(A[mid]==item)
	{
		pos=mid;
		break;
	}	
		else if(mid<item)
		b=mid+1;
		else
		e=mid-1;
	}

    
	if(pos==-1)
		printf("\nElement not found in Array \n");
		else
		printf("\n%d is present at position %d\n",item,pos+1);
	
}
void searching(int A[],int item)
{
	
	char ch;
	system("cls");
printf("\nThere are two types of searching                                       enter 'l' to go to linear data structurs\n\n                                                                                           enter 'h ' to go to HOME\n\n");
printf("1.Linear Search:It is a sequencial search ,it is slower then binary search (elements can be of any order)\n");
printf("2.Binary Search:It is a ordersd search ,it is faster then Linesr search (elements should be in order)\n");
printf("Enter your choice \n");
ch=getche();
if(ch=='1')
linearSearch(A,item);
else if(ch=='2')
binarySearch(A,item);
else if(ch=='L'||ch=='l')
	Linear();
	else if(ch=='H'||ch=='h')
	displayScreen();
else
{
printf(" Invalid choice \n");
getch();
searching(A,item);
}
return;
}
void twoDarray()
{
int A[10][10],m,n,i,j;
printf("\nEnter the order of matrices : ");
scanf("%d %d",&m,&n);
printf("\nEnter the %d elements of matrix\n",m*n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);
printf("Elements of matrix are\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d \t",A[i][j]);
printf("\n");
}
getch();
}
void AddSub2D()
{
int A[10][10],B[10][10],add[10][10],sub[10][10],m,n,i,j;
printf("\nEnter the order of matrices : ");
scanf("%d %d",&m,&n);
printf("\nEnter the %d elements of First matrix\n",m*n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);
printf("\nEnter the %d elements of second matrix\n",m*n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&B[i][j]);
printf("\nElements of First matrix are\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d \t",A[i][j]);
printf("\n");
}
printf("\nElements of Second matrix are\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d \t",B[i][j]);
printf("\n");
}
printf("\nAddition of Two Matrices are\n");
for(i=0;i<m;i++){

for(j=0;j<n;j++)
{
	add[i][j]=A[i][j]+B[i][j];
	printf("%d \t",add[i][j]);
}
printf("\n");
}

printf("\nSubstraction of Two Matrices are\n");
for(i=0;i<m;i++){

for(j=0;j<n;j++)
{
	sub[i][j]=A[i][j]-B[i][j];
	printf("%d \t",sub[i][j]);
}
printf("\n");
}
getch();
}
void matrixMult()
{
int A[10][10],B[10][10],mul[10][10],m,x,n,k,l,i,j;
printf("\nEnter the order of First matrices : ");
scanf("%d %d",&m,&n);
printf("\nEnter the %d elements of First matrix\n",m*n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);
printf("\nEnter the order of Second matrices : ");
scanf("%d %d",&k,&l);
printf("\nEnter the %d elements of second matrix\n",k*l);
for(i=0;i<k;i++)
for(j=0;j<l;j++)
scanf("%d",&B[i][j]);
printf("\nElements of First matrix are\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d \t",A[i][j]);
printf("\n");
}
printf("\nElements of Second matrix are\n");
for(i=0;i<k;i++){
for(j=0;j<l;j++)
printf("%d \t",B[i][j]);
printf("\n");
}
if(m!=l)
{
	printf("Matrix Multplication is not possible for this order");
	return;
}
for(i=0;i<m;i++)
for(j=0;j<l;j++){
mul[i][j]=0;
for(x=0;x<l;x++)
mul[i][j]=mul[i][j]+A[i][x]*B[x][i];
}
printf("Multiplication of two matrices are \n");
for(i=0;i<m;i++){
for(j=0;j<l;j++)
printf("%d \t",mul[i][j]);
printf("\n");
}	
getch();
}
void transpose2D(){
int A[10][10],m,n,i,j;
printf("\nEnter the order of matrices : ");
scanf("%d %d",&m,&n);
printf("\nEnter the %d elements of matrix\n",m*n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);
printf("Elements of matrix are\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d \t",A[i][j]);
printf("\n");
}	
printf("Transpose of matrix are\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d \t",A[j][i]);
printf("\n");
}
}
bobbleSort(int A[])
{
	int i,j,temp;
	if(n==0)
	{
		printf("\nArray is Empty \n");
	}
	for(i=1;i<n;i++)
	for(j=0;j<n-i;j++)
	if(A[j]>A[j+1])
	{
	temp=A[j];
     A[j]=A[j+1];
	 A[j+1]=temp;	
	}
}
insertionSort(int A[])
{
	int i,j,temp;
	if(n==0)
	{
		printf("\nArray is Empty \n");
	}
	for(i=1;i<n;i++)
	{
		temp=A[i];
		for(j=i-1;j>=0&&temp<A[j];j--)
		A[j+1]=A[j];
		A[j+1]=temp;
	}
	
}
selectionSort(int A[])
{
	int i,temp,min,loc,j;
	for(i=0;i<n;i++)
	{
		min=A[i];
		loc=i;
		for(j=i+1;j<=n-1;j++)
		if(min>A[j])
		{
			min=A[j];
			loc=j;
		}
		temp=A[i];
		A[i]=A[loc];
		A[loc]=temp;
		
	}
}
void Array()
{
	system("cls");
	char ch,c;
	while(1){
	printf("\n Types of Arrays                                                      enter 'l' to go to linear data structurs\n\n");
	printf("1.Arrays                                                                Enter '?' to help\n");
	printf("2.Multi Dimesional                                                       enter 'h ' to go to HOME\n\n");
	printf("Enter your choice : ");
	c=getche();
	if(c=='1'){
		int A[20];
		A:
		system("cls");
		while(1){
			int item,pos;
	printf("\nArray is a collection of homogineas data elements in sequence                                      enter 'l' to go to linear data structurs\n\n\n\n");
	printf("operations of Array \n");
	printf("1.Create\n");
	printf("2.Insertion\n");
	printf("3.Deletion\n");
	printf("4.searching\n");
	printf("5.Sorting\n");
	printf("6.Display\n");
	printf("7.Length\n");
	printf("8.IsEmpty                                                                                    enter '?' to help\n");
	printf("9.IsFull \n");          
	printf("\nEnter X to EXIT                                                                          enter 'h ' to go to HOME\n\n  ");
	printf("Enter your choice : ");
	ch=getche();
	switch(ch){
	case '1':createArray(A);
	break;
	case '2':printf("\nEnter the element to be inserted : ");
	scanf("%d",&item);
	printf("\nEnter the position to insert %d :",item);
	scanf("%d",&pos);
	insertArray(A,item,pos);
	break;
	case '3':printf("\nEnter the position to be deleted\n");
	scanf("%d",&pos);
	deleteArray(A,pos);	
	break;
	case '4':printf("\nEnter the item to be searched\n");
	scanf("%d",&item);
	searching(A,item);
	break;
	case '6':displayArray(A);
	break;
	case '5':{
		system("cls");
		int ch;
		printf("\n1.Bubble Sort\n");
		printf("2.Insertion Sort\n");
		printf("3.Selection Sort\n");
		printf("Enter 0 to go back\n");
		scanf("%d",&ch);
		if(ch==1)
		bobbleSort(A);
		else if(ch==2) 
		insertionSort(A);
		else if(ch==3) 
		selectionSort(A);
		else
		goto A;
		break;
	}
	case '7':printf("\nLength of Array is : %d ",n);
	break;
	case '8':if(isEmpty()) {
		printf(" \nArray is : Empty");
	}else printf("\nArray is : Not-Empty");
	break;
	case '9':if(isFull()){
	printf("\n Array is : Full");	
	} else printf("\n Array is : Not-Full");
	break;
	case 'x':
	case 'X':exit(0);
	break;
	case 'H':
	case 'h': displayScreen();
	break;
	case '?':helpArray();
	break;
	case 'L':
	case 'l':Linear();
	
	}
}
}

    else if(c=='2'){
    	while(1){
        char choice;
        system("cls");
    	printf("Multi Dimensional array are 2D array 3D array .....                                         enter 'l' to go to linear data structurs\n\n\n");
    	printf("1.Demonstration of 2D array                                                                   enter 'h ' to go to HOME\n");
    	printf("2.Addition and Substraction of2D array                                                         \n");
    	printf("3.Multiplication  of2D array \n");
    	printf("4.Transpose of a matric \n");
    	printf("Enter 5 to exit \n");
    	printf("Enter your choice\n");
    	choice=getche();
    	switch(choice)
    	{
    		case '1':twoDarray();
    		break;
    		case '2':AddSub2D();
    		break;
    		case '3':matrixMult();
    		break;
    	    case '4':transpose2D();
    	    break;
    	    case '5':exit(0);
	break;
	case 'H':
	case 'h': displayScreen();
	break;
	case 'L':
	case 'l':Linear();
	break;
		default : printf("Enter correct option \n");
		
		}
	}
	}
	else if(c=='L'||c=='l')
	Linear();
	else if(c=='?')
	helpArray();
	else if(c=='H'||c=='h')
	displayScreen();

	else{
		printf("Enter corrcct choice \n");
		Array();
	}
}
}
int factorial(int k)
{
	if(k==1)
	return 1;
	else
	return (k*factorial(k-1));
}
int fib(int n)
{
	if(n==0||n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	{
		return (fib(n-1)+fib(n-2));
	}
}
void toh(int n,char s,int t,int d)
{
	if(n>0)
	{
		toh(n-1,s,d,t);
		printf("Move Disk %d %c->%c\n",n,s,d);
		toh(n-1,t,s,d);
	}
}
int gcd(int m,int n)
{
	if(n==0)
	return m;
	else if(n>m)
	return gcd(n,m);
	else
	return gcd(n,m%n);
}
int isEmptyS(){
	if(top==-1)
	{
		printf("Stack is Empty");
	 return 1;	
	}
	else
	 {
	printf("\nstack is not empty");
	 return 0;
}
}
int isFullS(){
	if(top==N-1)
	{
		printf("Stack is Full");
	 return 1;	
	}
	else{
	printf("\nstack is not full");
	 return 0;
}
}
void push(int stack[])
{
	int item;
	if(!isFullS())
	{
		printf("\nEnter the item : ");
		scanf("%d",&item);
		stack[++top]=item;
	}
}
void pop(int stack[])
{
	int item;
	if(!isEmptyS())
	{
		printf("\nDeleted element is : %d ",stack[top--]);
		
	}
}
void displayStack(int stack[])
{
	int i;
	if(!isEmptyS())
	{
	      printf("\nElements of stack are as folled : \n");
	      for(i=0;i<= top;i++)
		  	printf("%d \n",stack[i]);
			
	}

}
void insert_end(int data);
void delete_end();
int length();
void display();

void infixpush(char S[],int *top,char *item)
{
  	if(*top>=50)
  	printf("Stack overflow error \n");
  	else
  	S[++(*top)]=*item;
}
char infixpop(char S[],int *top)
{
  	
    return S[(*top)--];
}
void epush(int S[],int *top,int *item)
{
  	if(*top>=50)
  	printf("Stack overflow error \n");
  	else
  	S[++(*top)]=*item;
}
int epop(int S[],int *top)
{
  	   return S[((*top)--)];
}

void evalPostfix()
{
	char postfix[50],item;
	int top=-1,i=0,j=0,op1,op2,res,S[50];
  system("cls");
  printf("Evaluating postfix expression \n");
  printf("**********************************\n");	
  printf("Enter postfix expression : ");
  scanf("%s",&postfix);
  while(i<strlen(postfix)){
  	 item=postfix[i];
  if(isdigit(item))
 {
 int i1= item-'0';
   epush(S,&top,&i1);
}
else
{
   op2=epop(S,&top);
   op1=epop(S,&top);
   switch(item)
   {
   	case '+':res=op1+op2;break;
   	case '-':res=op1-op2;break;
   	case '*':res=op1*op2;break;
   	case '/':res=op1/op2;break;
   	case '^':res=pow(op1,op2);break;
   	default:printf("Invalid choice");
	}
	   epush(S,&top,&res);	
}
i++;
}
printf("Result of above expression is %d",epop(S,&top));
}
int pre(char ch)
{
	switch(ch)
	{
		case '+':
			case '-':return 1;
			break;
			case '*':
				case '/':return 2;
				break;
				case '^':return 3;
				break;
				case '(':
				case '#': return 0;
				
	}
}
void infixTopost()
{
	char S[50],infix[50],postfix[50];
	int top=0,j=0,i;
    system("cls");
	printf("Converting infix to postfix \n");
	printf("Enter Infix expression : ");
	scanf("%s",&infix);
	char ch='#';
	infixpush(S,&top,&ch);
	for(i=0;i<strlen(infix);i++)
	{
		ch=infix[i];
		if(isalnum(ch))
		postfix[j++]=ch;
		else if(ch=='(')
		{
			infixpush(S,&top,&ch);
		}
		else if(ch==')')
		{
			while(S[top]!='(')
			postfix[j++]=infixpop(S,&top);
			char d=infixpop(S,&top);
		}
		else{
			while(pre(S[top])>=pre(ch))
			{
				postfix[j++]=infixpop(S,&top);
			
			}
				infixpush(S,&top,&ch);
		}
	}
	while(S[top]!='#')
	postfix[j++]=infixpop(S,&top);
	postfix[j]='\0';
	printf("postfix expression : %s",postfix);
}
void Stack()
{
	int ch;
	system("cls");
	printf("Stack is a linear data structures, It is a collection of elements in LIFO (Last In First Out) mathod. \n");
	while(1)
	{
		printf("\n1.Applications of stack\n"); 
		printf("2.Operations on stack \n");
		printf("3.Help\n");
		printf("Enter 0 to exit\n");
		printf("Enter your choice : "); 
		scanf("%d",&ch);
		if(ch==1)
		{
			char choice,s='S',t='T',d='D';
			int n,value,i=0,j;
			
			system("cls");
			printf("\nRecursion is the main Application of stack\n\n");
			printf("\nThe function calling it's self is called Recursion \n\n\n");
			printf("Importent programs under Recursion are as followed\n");
			printf("1.Factorial using Recursion                                                                   enter 'h' to go to Home \n");
			printf("2.Fibonacci using Recursion                                                                   enter 'l' to go to Linear\n");
			printf("3.GCD using Recursion                                                                         enter 'S' to go to stack\n");
			printf("4.tower of Hanoi problem                                                                      enter '?' to help\n");
			printf("5.Evaluation of postfix expession \n");
			printf("6.Convertion on infix to postfix expession \n");
			printf("7.Exit");
			choice=getche();
			switch(choice)
			{
				case '1':printf("\nEnter a number :");
				 scanf("%d",&n);
				 if(n<0)
				 printf("No Factorial for negative numbers \n");
				 else if(n==0)
				 printf("Factorial of zero is 1 \n");
				 else{
				 	value=factorial(n);
				 	printf("\nFactorial of %d is %d",n,value);
				 }
				 break;
				 case '2':printf("\nEnter a number to generate fibonacci series : ");
				 scanf("%d",&n);
				 while(i<n)
				 {
				 	++i;
				 	printf("%d ",fib(i));
				 }
				 printf("\n%dth elements of series is : %d \n",i,fib(i));
				 break;
				 case '4':printf("\nEnter a number of disks \n");
				 scanf("%d",&n);
				 printf("\nThe sequence is : \n");
				 toh(n,s,t,d);
				 break;
				 case '3':printf("\nEnter 3 numbers : ");
				 scanf("%d %d %d",&i,&j,&n);
				 printf("GCD(%d %d %d)=%d",i,j,n,gcd(i,gcd(j,n)));
				 break;
				 case '6':infixTopost();
				 break;
				 case '?':helpStack();
				 break;
				 case '7':exit(0);
					break;
					case '5':evalPostfix();
					break;
					case 'H':
					case 'h': displayScreen();
					break;
					case 'L':
					case 'l':Linear();
					break;
					case 's':Stack();
					break;
						default : printf("Enter correct option \n");
			}
			
			
		}else if(ch==2)
		{
			
			char Sch,choice;
			system("cls");
			printf("We can represent STACK in two way\n");
			printf("1.Array representation \n");
			printf("2.Linked List representation                                 enter 'S' to go to stack\n");
			printf("Enter your choice \n");
			Sch=getche();
			if(Sch=='1'){
				int stack[N];
			    Z:
			while(1){
				printf("\n\tArray representation of Stack \n");
				printf("1.push\n");
				printf("2.pop                                                                         Enter 'X' to exit\n");
				printf("3.isEmpty                                                                     enter 'h' to go to Home \n");
				printf("4.isFull                                                                        enter 'l' to go to Linear\n");
				printf("5.peek                                                                      enter 'S' to go to stack\n");
				printf("6.Top size \n");
				printf("7.Display \n");
				printf("Enter your choice \n");
				choice=getche();
				switch(choice){
				    case '1':push(stack);
				    break;
				    case '2':pop(stack);
				    break;
				    case '3':isEmptyS();
				    break;
				    case '4':isFullS();
				    break;
				    case '5':printf("\nTop/peek Element of Stack  is %d",(top!=-1)? stack[top]:-1);
				    break;
				    case '6':printf("\nTop size of Stack  is %d",N);
				    break;
				    case '7': displayStack(stack);
				    break;
					 case 'X':
					 case 'x':exit(0);
					break;
					case 'H':
					case 'h': displayScreen();
					break;
					case 'L':
					case 'l':Linear();
					break;
					case 's':Stack();
					break;
						default : printf("Enter correct option \n");
			}
		}
			}else
			if(Sch=='2')
			{int choi,data,i;
				system("cls");
				while(1){
				printf("\nLinked List represetation of Stack\n");
				printf("1.push                                              enter 'h' to go to Home \n");
				printf("2.pop                                               enter 'l' to go to Linear\n");
				printf("3.length                                              enter 'S' to go to stack\n");
				printf("4.display                                             enter '?' to help\n");
				printf("Enter your choice \n");
			    choi=getche();
			    	switch(choi){
				    case '1':printf("\nEnter the item to push: ");
				    scanf("%d",&data);
					insert_end(data);
				    break;
				    case '2':delete_end();
				    break;
				   
				    case '3':printf("\ntotal number of elements is : %d",length());
				    break;
				    case '4': display();
				    break;
					
					case 'H':
					case 'h': displayScreen();
					break;
					case 'L':
					case 'l':Linear();
					break;
					case 's':Stack();
					break;
					case '?':helpStack();
					break;
						default : printf("\nEnter correct option \n");
			}
		}
			}else if(Sch=='S'||Sch=='s')
			{
				Stack();
			}
			else {
			printf("INVALID CHOICE \n");
			goto Z;
		}
		}
		else if(ch==3)
		helpStack();
		else if(ch==0){
		exit(0);
	}
		
	}
}
int isQEmpty(int *front,int *rear)
{
	if(*rear==-1)
	{
		printf("\nQueue is Empty\n");
		return 1;
	}
	else
	{
		printf("\nQueue is not Empty\n");
		return 0;
	}
}
int isQFull(int *front,int *rear)
{
	if(*rear==N-1)
	{
		printf("\nQueue is Full\n");
		return 1;
	}
	else
	{
		printf("\nQueue is not Full\n");
		return 0;
	}
}
void Qinsert(int Q[],int *front,int *rear)
{
	int item;
	if(!isQFull(front,rear));
	{
		printf("Enter the item to be inserted \n");
		scanf("%d",&item);
		(*rear)++;
		Q[*rear]=item;
	}
	
}
void Qdeletion(int Q[],int *front,int *rear)
{
	if(!isQEmpty(front,rear))
	{
		if(*rear==0)
		{printf("\nthere is only one element so we will reset it \n");
		printf("Deleting element is :%d",Q[*rear]);
			*front=0;
			*rear=-1;
		}
		else{
		printf("Deleting element is :%d",Q[*rear]);
		(*front)++;
	}
	}
}
void QDisplay(int Q[],int *front,int *rear)
{
	int i;
	if(!isQEmpty(front,rear))
	{
		printf("\nElements of Queue is :");
		for(i=*front;i<=*rear;i++)
           printf("%d\t",Q[i]);
		}
	}
void AQueue()
{
	char cho;
	int Q[N],front=0,rear=-1;
	system("cls");
	while(1){
	printf("\n\tArray Representation \n");
	printf("1.Queue Insertion \n");
	printf("2.Queue Deletion                                                           enter 'h' to go to home\n");
	printf("3.Queue Display                                                           enter 'l' to go to Linear\n");
	printf("4.isEmpty                                                             enter 'Q' to go to Queue\n");
	printf("5.isFull \n");
	printf("6.length \n");
	cho=getche();
	switch(cho)
	{
		case '1':Qinsert(Q,&front,&rear);
		break;
		case '2':Qdeletion(Q,&front,&rear);
		break;
		case'3':QDisplay(Q,&front,&rear);
		break;
		case'4':isQEmpty(&front,&rear);
		break;
		case '5':isQFull(&front,&rear);
		break;
		case '6':printf("Length of Queue is : %d",rear+1);
		break;
		case 'Q':
	    case 'q': Queue();
		break;
		 case 'H':
	    case 'h': displayScreen();
		break;
		case 'L':
		case 'l':Linear();
		break;
		default : printf("\nEnter correct option \n");
		
		
	}
}
	
}
void delete_beg();
void insert_end(int data);
int length();
void LLQueue()
{
char cho;
int data;

	system("cls");
	while(1){
	printf("\n\tLinked List Representation \n");
	printf("1.Queue Insertion \n");
	printf("2.Queue Deletion                                                           enter 'h' to go to home\n");
	printf("3.Queue Display                                                           enter 'l' to go to Linear\n");
	printf("4.isEmpty                                                             enter 'Q' to go to Queue\n");
	printf("5.length \n");
	cho=getche();
	switch(cho)
	{
		case '1':printf("Enter the item  to be inserted : ");
		scanf("%d",&data);
		insert_end(data);
		break;
		case '2':delete_beg();
		break;
		case'3':display();
		break;
		case'4':printf("%s",(start==NULL)?"Queue is empty":"Queue is not empty");
		break;
		case '5':printf("Length of Queue is : %d",length());
		break;
		case 'Q':
	    case 'q': Queue();
		break;
		 case 'H':
	    case 'h': displayScreen();
		break;
		case 'L':
		case 'l':Linear();
		break;
		default : printf("\nEnter correct option \n");
		
		
	}
}	
}
void linearQueue()
{
    char c;
    system("cls");
	printf("linear Queue can be represented in two ways :\n");
	printf("1.Array representation                                                      enter 'l' to go to Linear\n");
	printf("2.Linked List representation                                                enter 'Q' to go to Queue\n");
	printf("Enter your choice");
	c=getche();
	switch(c)
	{
		case '1':AQueue();
		break;
		case '2':LLQueue();
		break;
		case 'Q':
	    case 'q': Queue();
		break;
		case 'L':
		case 'l':Linear();
		break;
		default : printf("\nEnter correct option \n");
	}
}
int isCQEmpty(int *front,int *rear)
{
	if(*front==-1)
	{
		printf("\nCircular Queue is Empty\n");
		return 1;
	}
	else
	{
		printf("\nCircular Queue is not Empty\n");
		return 0;
	}
}
int isCQFull(int *front,int *rear)
{
	if(*front==(((*rear)+1)%N))
	{
		printf("\nCircular Queue is Full\n");
		return 1;
	}
	else
	{
		printf("\nCircular Queue is not Full\n");
		return 0;
	}
}
void CQinsert(int Q[],int *front,int *rear){
	int item;
	if(!isCQFull(front,rear))
	{
		printf("Enter the item to be inserted : ");
		scanf("%d",&item);
		if(*front==-1)
		{
			*front=0;
			*rear=0;
		}
		else
		*rear=((*rear)+1)%N;
		Q[*rear]=item;
	}
}
void CQdeletion(int Q[],int *front,int *rear){
	if(!isCQEmpty(front,rear))
	{
		printf("Deleted element is : %d",Q[*front]);
		if(*front==*rear)
		*front=*rear=-1;
		else
		*front=((*front)+1)%N;
	}
}
void CQDisplay(int Q[],int *front,int *rear){
	int i;
	if(!isCQEmpty(front,rear))
	{
	printf("Elements of circurar queue is : ");
	if(*front<=*rear)
	{
for(i=*front;i<=*rear;i++)
	printf("%d\t",Q[i]);
}
if(*front>*rear)
{
	for(i=*front;i<N;i++)
	printf("%d\t",Q[i]);
	for(i=0;i<=*rear;i++)
	printf("%d\t",Q[i]);	
}
printf("\nFront element of Circular queue is : %d",Q[*front]);
printf("\nRear element of Circular queue is : %d",Q[*rear]);
}
}
void circularQueue()
{
	char cho;
	int Q[N],front=-1,rear=-1;
	system("cls");
	printf("Circulat Queue is as same as Linear Queue but, only difference is \nLast element is connected to first element that makes circular shape \n");
	while(1){
	printf("\n\tArray Representation \n");
	printf("1.Circular Queue Insertion \n");
	printf("2.Circular Queue Deletion                                                           enter 'h' to go to home\n");
	printf("3.CircularQueue Display                                                           enter 'l' to go to Linear\n");
	printf("4.Circular isEmpty                                                             enter 'Q' to go to Queue\n");
	printf("5.Circular isFull \n");
	printf("6.length \n");
	cho=getche();
	switch(cho)
	{
		case '1':CQinsert(Q,&front,&rear);
		break;
		case '2':CQdeletion(Q,&front,&rear);
		break;
		case'3':CQDisplay(Q,&front,&rear);
		break;
		case'4':isCQEmpty(&front,&rear);
		break;
		case '5':isCQFull(&front,&rear);
		break;
		case '6':printf("Length of Queue is : %d",(rear+1)-front);
		break;
		case 'Q':
	    case 'q': Queue();
		break;
		 case 'H':
	    case 'h': displayScreen();
		break;
		case 'L':
		case 'l':Linear();
		break;
		default : printf("\nEnter correct option \n");
		
		
	}
}
}
void DQinsert_beg(int Q[],int *front,int *rear)
{
	int item=-1;
	if(!isCQFull(front,rear))
	{
		printf("Enter the item to be inserted : ");
		scanf("%d",&item);
	    if(*front==-1)
	    *front=*rear=0;
	    if(*front==0)
	    (*front)=N-1;
	    else
	    (*front)=((*front)-1)%N;
	    Q[*front]=item;
	}
	
}
void DQdeletion_end(int Q[],int *front,int *rear)
{
    if(!isCQEmpty(front,rear))
	{
		printf("deleted item is : %d ",Q[*rear]);
		if(*front==*rear)
			*rear=*front=-1;
			if(*rear==0)
			*rear=N-1;
		else
		*rear=((*rear)-1)%N;
	}
}
		

void doubleEndedQ()
{
	char ch;
	int Q[N],rear=-1,front=-1;
	system("cls");
	printf("Double ended Queue is a Queue where we can insert and delete at both the ends of the queue \n");
	printf("In this we can see two types \n1.Input ristricted \n2.Output ristricted \n");
	printf("But, Let us combine both and do it \n");
	printf("operations of Double ended Queue are :\n");
	while(1){
	printf("\n1.Insert at begining\n");
	printf("2.Insert at end\n");
	printf("3.Deletion at begining\n");
	printf("4.Deletion at end\n");
	printf("5.Display                                                               enter '?' to help\n");
	printf("6.Length                                                               enter 'h' to go to home\n");
	printf("7.isEmpyt                                                            enter 'l' to go to Linear\n");
	printf("8.isFull                                                           enter 'Q' to go to Queue\n");
	printf("Enter your choice : ");
	ch=getche();
	switch(ch)
	{
		case '1':DQinsert_beg(Q,&front,&rear);
		break;
		case '2':CQinsert(Q,&front,&rear);
		break;
		case '3':CQdeletion(Q,&front,&rear);
		break;
		case '4':DQdeletion_end(Q,&front,&rear);
		break;
		case '5':CQDisplay(Q,&front,&rear);
		break;
		case '6':printf("\nLength of Dequeue is : %d",(front==-1&&rear==-1)? 0:(front==0&&rear==0)?1:((N-front)+(rear+1)));
		break;
		case '7':isCQEmpty(&front,&rear);
		break;
		case '8':isCQFull(&front,&rear);
		break;
		case 'Q':
	    case 'q': Queue();
		break;
		 case 'H':
	    case 'h': displayScreen();
		break;
		case '?':helpQueue();
		break;
		case 'L':
		case 'l':Linear();
		break;
		default : printf("\nEnter correct option \n");
	}
}
	
}
void ascendingInsert(int Q[],int *front,int *rear)
{
	int item,i=*rear,j;
if(!isQFull(front,rear))
{
	printf("Enter the item to be inserted \n");
	scanf("%d",&item);
	while(i!=-1&&item<Q[i])
	{
		Q[i+1]=Q[i];
		i--;
		
	}
	Q[i+1]=item;
	(*rear)++;
}
	
}
void AscendingQueue()
{
	int Q[N],front=0,rear=-1;
	char ch;
	system("cls");
	while(1){
	printf("\nThe elements are arranged based on ascending priority \n");
	printf("1.Insert\n");
	printf("2.Deletion                                                                  enter 'h' to go to home\n");
	printf("3.Display                                                                 enter 'l' to go to Linear\n");
	printf("4.help                                                                 enter 'Q' to go to Queue\n");
	printf("Enter your choice : ");
	ch=getche();
		switch(ch)
	{
		case '1':ascendingInsert(Q,&front,&rear);
		break;
		case '2':Qdeletion(Q,&front,&rear);
		break;
		case '3':QDisplay(Q,&front,&rear);
		break;
		case '4':helpQueue();
		break;
		case 'Q':
	    case 'q': Queue();
		break;
		 case 'H':
	    case 'h': displayScreen();
		break;
		case 'L':
		case 'l':Linear();
		break;
		default : printf("\nEnter correct option \n");
	
	
}
}
}
void dscendingInsert(int Q[],int *front,int *rear)
{
	int item,i=*rear,j;
if(!isQFull(front,rear))
{
	printf("Enter the item to be inserted : ");
	scanf("%d",&item);
	while(i!=-1&&item>Q[i])
	{
			Q[i+1]=Q[i];
		i--;
		
	}
	Q[i+1]=item;
	(*rear)++;
}
}
void DscendingQueue()
{
	int Q[N],front=0,rear=-1;
	char ch;
	system("cls");
	while(1){
	printf("\nThe elements are arranged based on dscending priority \n");
	printf("1.Insert\n");
	printf("2.Deletion                                                                  enter 'h' to go to home\n");
	printf("3.Display                                                                 enter 'l' to go to Linear\n");
	printf("4.help                                                                 enter 'Q' to go to Queue\n");
	printf("Enter your choice : ");
	ch=getche();
		switch(ch)
	{
		case '1':dscendingInsert(Q,&front,&rear);
		break;
		case '2':Qdeletion(Q,&front,&rear);
		break;
		case '3':QDisplay(Q,&front,&rear);
		break;
		case '4':helpQueue();
		break;
		case 'Q':
	    case 'q': Queue();
		break;
		 case 'H':
	    case 'h': displayScreen();
		break;
		case 'L':
		case 'l':Linear();
		break;
		default : printf("\nEnter correct option \n");
	
	
}
}
}
void _2DQueueInsertion(int Q[][N],int front[],int rear[],int pr)
{
	int item;
	printf("\nEnter thr priority (1,2,3) :");
	scanf("%d",&pr);
	if(pr>3)
	{
		printf("\nInvalid input \n");
		getch();
		return;
	}
	if(rear[pr-1]==N-1)
	printf("\nQueue overflow \n");
	else
	{
	printf("\nEnter the item to be inserted into proirity Queue : ");
	scanf("%d",&item);
	rear[pr-1]++;
	Q[pr-1][rear[pr-1]]=item;
	printf("\nInsertion completed\n");	
	}
}
void _2Ddeletion(int Q[][N],int front[],int rear[])
{
	int i;
	for(i=0;i<3;i++){
	if(rear[i]==-1)
	{
		printf("\nQueue%d underflow \n",i+1);
	}
	else
	{
		printf("\nDeleted element is %d ",Q[i][front[i]]);
		front[i]++;		
	}
}
}
void _2Ddisplay(int Q[][N],int front[],int rear[])
{
	int i,j;
	for(i=0;i<3;i++){
	if(rear[i]==-1)
	{
		printf("\nQueue%d is empty  \n",i+1);
	}
	else{
		printf("\npriority %d : ",i+1);
		for(j=front[i];j<=rear[i];j++)
		printf("%d \t",Q[i][front[i]]);
		printf("\n");
	}
}
}
priority_2DQueue()
{
	char choice;
	int Q[3][N],front[3]={0,0,0},rear[3]={-1,-1,-1},pr=-1;
	system("cls");
	while(1){
	printf("\nIn 2D representation of priority ,we maintain a 2D array to store the elements and \n also we maintain 2 linear arrays one is for storing the front and another one is for storing rear values of priority Queue \n ");
	printf("\n1.Insert");
	printf("\n2.Deletion                                     enter 'h' to go to home");
	printf("\n3.Display                                    enter Q to go back to Queue");
	printf("\n4.help                                           enter 'l' to go to Linear");
	printf("\nEnter your choice : ");
	choice=getche();
	switch(choice)
	{
	case '1':_2DQueueInsertion(Q,front,rear,pr);
	break;
	case '2':_2Ddeletion(Q,front,rear);
	break;
	case '3':_2Ddisplay(Q,front,rear);
	break;
	case '4':helpQueue();
	break;
	case 'Q':
	    case 'q': Queue();
		break;
		 case 'H':
	    case 'h': displayScreen();
		break;
		case 'L':
		case 'l':Linear();
		break;
		default : printf("\nEnter correct option \n");	
	}
}
}
void priorityQueue(){
	char c;
	system("cls");
	printf("the elements are inserted or deleted based on priority \nthere are two types of priority\n");
	printf("1.Ascending priority Queue \n");
	printf("2.Dscending priority Queue                                           enter 'h' to go to home\n");
	printf("3.Priority Queue using 2D array \n");
	printf("Enter your choice : ");
	c=getche();
		switch(c){
		case '1':AscendingQueue();
		break;
    	case '2':DscendingQueue();
		break;
		case '3':priority_2DQueue();
		break;
        case 'H':
	    case 'h': displayScreen();
	    default:printf("INVALID CHOICE \n");
	
}
}
void Queue()
{
	char choice;
	system("cls");
	while(1){
	printf("Queue is linear data structure which follow FIFO (First In First Out )\n");
	printf("types of Queue are as followed \n");
	printf("1.Linear Queue\n");
	printf("2.circular Queue                                          enter 'l' to go to Linear\n");
	printf("3.Double Ended Queue                                      enter 'h' to go to home\n");
	printf("4.preority Queue\n");
	printf("\nEnter your choice : ");
	choice=getche();
	switch(choice){
		case '1':linearQueue();
		break;
    	case '2':circularQueue();
		break;
		case '3':doubleEndedQ();
		break;
		case '4':priorityQueue();
		break;
        case 'H':
	    case 'h': displayScreen();
		break;
		case 'L':
		case 'l':Linear();
		break;
		default : printf("\nEnter correct option \n");
	}
}
}
NODE *getNode()
{
	NODE *node1;
	node1=(NODE*)malloc(sizeof(NODE));
	if(node1==NULL){
	printf("Memory overflow \n");
	exit(0);
   }
return (node1);
} 
void create()
{
	char cho;
	NODE *currptr,*newnode;
	currptr=getNode();
	start=currptr;
	while(1){
		printf("\nEnter the data to be stored in this node :");
		scanf("%d",&currptr->info);
		printf("\nDO you want to add another NODE  to Linked List (Y/N):");
		cho=getche();
		if(toupper(cho)=='Y'){
		newnode=getNode();
		currptr->link=newnode;
		currptr=newnode;
	}
	else{
		currptr->link=NULL;
		break;
	}
		
	}
}
void insert_beg(int data){
	NODE *newnode=getNode();
	newnode->info=data;
	newnode->link=start;
	start=newnode;
}
void insert_end(int data){
	NODE *currptr,*NEWNODE;
	if(start==NULL)
	insert_beg(data);
	else{
		currptr=start;
	    NEWNODE=getNode();
		NEWNODE->info=data;
		while(currptr->link!=NULL){
			currptr=currptr->link;
		}
		NEWNODE->link=currptr->link;
		currptr->link=NEWNODE; 
	}
}
void insert_pos(int pos,int data)
{
	int i;
	NODE *currptr,*newnode;
	if(pos==1)
	insert_beg(data);
	else{
		currptr=start;
		for(i=0;i<pos-2;i++)
		currptr=currptr->link;
		newnode=getNode();
		newnode->info=data;
		newnode->link=currptr->link;
		currptr->link=newnode;
		
		
	}
}
int length(){
	int i=0;
	NODE *currptr;
	if(start==NULL)
	return i;
	currptr=start;
	while(currptr!=NULL)
	{
		i++;
		currptr=currptr->link;
	}
	return i;
}
void display()
{
	NODE *currptr=getNode();
	currptr=start;
	if(start==NULL){
	printf("\nLinked List is empty");
	return;
    }
    else{
	printf("\n");
	while(currptr!=NULL)
	{
		printf("%d",currptr->info);
		printf("->");
		currptr=currptr->link;
	}
	printf("NULL");
	}
	
}
void delete_beg(){
	NODE *currptr;
	if(start==NULL){
	printf("\nLinked List Underflow");
	return;	
    }
    else
    {
    	currptr=start;
    	start=start->link;
    	free(currptr);
    	
	}	
}
void delete_end()
{
	NODE *currptr=start,*preptr=NULL;
	if(currptr==NULL)
	printf("\nList is empty \n");
	else{
	while(currptr->link!=NULL){
    preptr=currptr;
	currptr=currptr->link;
    }
    preptr->link=currptr->link;
    free(currptr);
}
}
void delete_pos(int pos){
	int i;
	NODE *currptr=start,*prevptr=NULL;
	if(start==NULL){
	printf("\nLinked List Underflow");
	return;	
    }
	if(pos==1)
	delete_beg();
	else{
		for(i=1;i<pos;i++)
		{
			prevptr=currptr;
			currptr=currptr->link;
		}
		prevptr->link=currptr->link;
		free(currptr);
	}
	
}
void LList()
{
		int ch,pos,data;
	
	while(10){

	printf("\nLinked List operations \n ");
	printf("****************************\n");
	printf("1.Create a NODE\n");
	printf("2.Length of Linked List \n");
	printf("3.Display Linked List\n");
	printf("4.Insertion at Begnning\n");
	printf("5.Insertion at End\n");
	printf("6.Insertion at specified position\n");
	printf("7.Deletion at Begnning\n");
	printf("8.Deletion at End                                                                           enter 'l' to go to Linear\n");
	printf("9.Deletion at secified position                                                             enter 'h' to go to home\n");
	printf("10.Deletion at secified Element\n");
	printf("Enter your choice \n ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:create();
		    break;
		case 2:printf("Length of Liked list is %d",length());
		    break;
		case 3:printf("\nLinked List items are : ");
		    display();
		    break;
		case 4:printf("Enter the element to be insertes at begnning : ");
		   scanf("%d",&data);
		   insert_beg(data);
		   break;
		case 5:printf("Enter the element to be insertes at End : ");
		scanf("%d",&data);
		insert_end(data);
		break;
		case 6:printf("\nEnter the position to be inserted : ");
	    scanf("%d",&pos);
		printf("Enter the element to be insertes at position %d  : ",pos);
		scanf("%d",&data);
		insert_pos(pos,data);
		break;
		case 7:delete_beg();
		    break;
	    case 9:printf("\nEnter the position to be deleted : ");
	    scanf("%d",&pos);
		delete_pos(pos);
		    break;
		    case 'H':
	    case 'h': displayScreen();
		break;
		case 'L':
		case 'l':Linear();
		break;
		default:printf("\nInvalid input !!!!!\nEnter corret choice \n");
	}
		}
		return;
}
void helpArray(){
	printf("\n\n");
	printf("\t__________________________________Arrays_______________________________________________\n");
	printf("\t              ______________________|_____________________________\n");
	printf("\t            1D Array                                           2D Array\n");
	printf("\t               |                                                    | \n");
	printf("\t               |--Create Array                                      |--Demo of 2D array                        \n");
	printf("\t               |                                                    |         \n");
	printf("\t               |--Insertion                                         |--Add & Sub of 2D array                    \n");
	printf("\t               |                                                    |     \n");
	printf("\t               |--Deletion                                          |--Multi of 2dD array       \n");
	printf("\t               |               |--Linear search                     |              \n");
	printf("\t               |--Searching----|                                    |--Transpose of Matrix                      \n");
	printf("\t               |               |--Binary search                                         \n");
	printf("\t               |--Sorting--------|                                       \n");  
	printf("\t               |                 |--Bubble sort                            \n");
	printf("\t               |--Length         |--Insertion sort                       \n");
	printf("\t               |                 |--Selection sort                 \n");
	printf("\t               |--IsEmpty        |--Shell sort                                       \n");
	printf("\t               |                 |--Merge sort                                         \n");
	printf("\t               |--IsFull         |--Quick sort                                \n");
	getch();
}
void helpStack(){
	printf("\n\n");
	printf("\t__________________________________Stacks_______________________________________________\n");
	printf("\t              ______________________|_____________________________\n");
	printf("\t          Applications                                           Operations\n");
	printf("\t               |                                              ______|__________ \n");
	printf("\t               |--Factorial using recursion                  |                 | \n");
	printf("\t               |                                          Array             LinkedList(Representation)\n");
	printf("\t               |--Fibonacci using recursion                  |_________________| \n");
	printf("\t               |                                                    | \n");
	printf("\t               |--GCD using recursion                               |--push \n");
	printf("\t               |                                                    | \n");
	printf("\t               |--tower of hanoi problem                            |--pop \n");
	printf("\t               |                                                    | \n");
	printf("\t               |--Evaluating postfix                                |--isEmpty \n");
	printf("\t               |                                                    | \n");
	printf("\t               |--converting infix to postfix                       |--isFull \n");
	printf("\t                                                                    | \n");
	printf("\t                                                                    |--Top Size \n");
	printf("\t                                                                    | \n");
	printf("\t                                                                    |--Display \n");
	getch();
}
void helpQueue(){
	printf("\n\n");
	printf("\t__________________________________Queue_______________________________________________\n");
	printf("\t         ___________________________|_____________________________\n");
	printf("\t        |                     |                 |                 | \n");
	printf("\t      Linear Queue        Circuler Queue      Double Queue     preority Queue\n");
	printf("\t    ____|_____                |                  |               | \n");
	printf("\t Array      LL(repesent)      |-Insertion        |-Insert beg    |-Ascending Preority  \n");
	printf("\t  |___________|               |                  |               |   \n");
	printf("\t       |                      |-Deletion         |-Insert end    |-Dscending Preority  \n");
	printf("\t       |-Insertion            |                  |               | \n");
	printf("\t       |                      |-Display          |-Delete beg    |-Multi Queue\n");
	printf("\t       |-Deletion             |                  |  \n");
	printf("\t       |                      |-isEmpty          |-Delete end   \n");
	printf("\t       |-Display              |                  |           \n");
	printf("\t       |                      |-isFull           |-Display     \n");
	printf("\t       |-isEmpty              |                  | \n");
	printf("\t       |                      |-length           |-Length\n");
	printf("\t       |-isFull                                  |  \n");
	printf("\t       |                                         |-isEmpty\n");
	printf("\t       |-length                                  |   \n");
	printf("\t                                                 |-isFull \n");
	getch();
}
void helpLL(){
	printf("\n\n");
	printf("\t__________________________________Linked List_______________________________________________\n");
	printf("\t1.Create a NODE\n\t2.Length of Linked List\n\t3.Display Linked List\n\t4.Insertion at Begnning\n\t5.Insertion at End\n\t6.Insertion at specified position\n\t7.Deletion at Begnning\n\t8.Deletion at End\n\t9.Deletion at secified position\n\t10.Deletion at secified Element\n");
	getch();
}
	
void Help()
{
	char ch;
	while(1){
	printf("\n\n\t\t\t__________________________________HELP_______________________________________________\n");
	printf("\t                                                   ________________________                  \n");
	printf("\t                                                  |   NON-PRIMITIVE DATA   |               \n");
	printf("\t                                                  |_______STRUCTURES_______|                  \n");
	printf("\t               _______________________________________________|_____________________________________ \n");
	printf("\t       _______|__________                          			                  __________|_________ \n");
	printf("\t      |   Linear Data    |                                     	                         |   Non-Linear Data  | \n");
	printf("\t      |____structures____|                                                               |______structures____| \n");
	printf("\t              |                                                                                     |    \n");
	printf("\t              |                                                                                     |       \n");
	printf("\t              |----Arrays                                                                  Trees----|\n");
	printf("\t              |                                                                                     |\n");
	printf("\t              |----Linked Lists                                                                     | \n");
	printf("\t              |                                                                           Graphs----|   \n");
	printf("\t              |----Stacks                                                                              \n");
	printf("\t              |                                                                                          \n");
	printf("\t              |----Queue                                                                               \n\n\n");
	printf("\tEnter A to show Arrays \n");
	printf("\tEnter L to show Linked List \n");
	printf("\tEnter S to show Stack \n");
	printf("\tEnter Q to show Queue\n");
	printf("\tEnter T to show Trees \n");
	printf("\tEnter G to show Graphs \n");
	printf("\tEnter X or 0 to go back \n\tchoice:");
	ch=getche();
	switch(ch){
	    case 'A':
		case 'a':helpArray();
		break;
		case 'L':
		case 'l':helpLL();
		break;
		case 'S':
		case 's':helpStack();
		break;
		case 'Q':
		case 'q':helpQueue();
		break;
		case 't':helpTree();
		break;
//		case 'G':
//		case 'g':helpGraph();
        break;
		case 'X':
		case 'x':
		case '0':return;
		break;
		default:printf("\nEnter correct choice\n");
			
			
	}
	
}
}
void NonLinear()
{
	char ch;
	system("cls");
printf("\n\n\n Mainly there are two Non Linear data structers  :\n");
printf("1.Trees\n");
printf("2.Graphs\n");
printf("Enter your choice :");
ch=getche();
if(ch=='1')
{
	Trees();
}
 else
 Graphs();
}
void displayScreen(){
	system("cls");
	
	printf("\t \t \t ___DATA STRUCTURES___ \n\n");
	printf("**************************************************************************************************************\n");
	printf(" \n");
	printf(" ****           ***       *****************  ***    \n");
	printf(" **  **        ** **             **         ** **    \n");
	printf(" **   **      **   **            **        **   **  \n");
	printf(" **    **    **     **           **       **     **  \n");
	printf(" **    **   ***********          **      ***********          \n");
	printf(" **   **   **         **         **     **         **       \n");
	printf(" **  **   **           **        **    **           ** \n");
	printf(" ****    **             **       **   **             ** \n");
	printf(" \n");
	printf(" \n");
	printf("  ******   **************  ****       **     **       ***   *************  **    **    *****     ******             \n");
	printf("  **            **         **  **     **     **      **          **        **    **    **  **    **            \n");
	printf("   **           **         **   **    **     **     **           **        **    **    **   **   **                \n");
	printf("    **          **         **  **     **     **    **            **        **    **    **  **    ******        \n");
	printf("     **         **         ****       **     **    **            **        **    **    ****      **               \n");
	printf("      **        **         ** **      **     **     **           **        **    **    ** **     **         \n");
	printf("  *******       **         **   **     *******        ***        **         ******     **  **    ****** \n");
	printf("**************************************************************************************************************\n ");
	printf("\n\n\n Enter any key \n");
	getch();
	infoDS();
}
void infoDS()
{
	char ch;
	system("cls");
	printf("\t \t \t ___DATA STRUCTURES___ \n\n");
	printf("\tOrganised collection of data is callrs as data structures \n");
	printf("\n\n\tTypes of Data Structures \n");
	printf("\t                 ___________________                   \n");
	printf("\t                |__Data Structures__|                 \n");
	printf("\t                        | \n");
	printf("\t           _____________|_____________________ \n");
	printf("\t  ________|__________               __________|________            \n");
	printf("\t |  Primitive        |             |  Non-Primitive    |                    \n");
	printf("\t |__Data Structures__|             |__Data Structures__|     \n");
	printf("\t         |- int                             | \n");
	printf("\t         |- char                    ________|_____________\n");
	printf("\t         |- double         ________|__________    ________|__________           \n");
	printf("\t         |- float         |  Linear           |  |  Non-Linear       |             \n");
	printf("\t                          |__Data Structures__|  |__Data Structures__|       \n");
	printf("\t                                  1                    2\n\n\n\n\n");
	printf("\n\n\n Enter your choice (1/2) :\n");
	ch=getche();
	if(ch=='1')
	Linear();
	else if(ch=='2')
	NonLinear();
	else{
		printf("Invalid chice \n");
		getch();
		infoDS();
	}
	getch();
}
void helpTree()
{
	printf("\n\n\t\t\t__________________________________Tree_______________________________________________\n");
	printf("\n\n\t\t\t\t\tOperations on Binar and Binary Search Tree \n");
	printf("\n\n\t\t\t\t\t1.creating Binary Tree \n");
	printf("\n\n\t\t\t\t\t2.creating Binary Search Tree \n");
	printf("\n\n\t\t\t\t\t3.Inserting Binary Search Tree \n");
	printf("\n\n\t\t\t\t\t4.Delating Binary Search Tree \n");
	printf("\n\n\t\t\t\t\t5.Searching Binary Search Tree \n");
	printf("\n\n\t\t\t\t\t6.Display \n");
	printf("\n\n\t\t\t\t\t7.Inorder traversal \n");
	printf("\n\n\t\t\t\t\t8.preorder traversal \n");
	printf("\n\n\t\t\t\t\t9.Inorder traversal \n");
	printf("\n\n\t\t\t\t\t10.Sorting Binary Search Tree \n");
	getch();
	
}
void CreateBST(int item)
{
	node *newnode,*currptr,*ptr;
	newnode=(node*)malloc(sizeof(node));
	newnode->ele=item;
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL)
	root=newnode;
	else
	{
		currptr=root;
		while(currptr!=NULL){
			ptr=currptr;
			currptr=(item > currptr->ele)?currptr->right:currptr->left;
		}
		if(item < ptr->ele)
		ptr->left=newnode;
		else
		ptr->right=newnode;
	}
}
void DisplayBT(node *temp,int l)
{
   int i;
   if(temp != NULL)
   {
   	DisplayBT(temp->right,l+1);
   	for(i=0;i<l;i++)
   	printf("\t");
   	printf("%2d\n",temp->ele);
   	DisplayBT(temp->left,l+1);
	   }	
}

void CreateBT(node *temp)
{
	node *Tleft,*Tright;
	int data;
	char ch;
	if(temp!=NULL){
	printf("\nEnter the item to be inserted :");
	scanf("%d",&data);
	temp->ele=data;
	
		printf("\nDo you want to create  at left child (Y/N): ");
		 ch=getche();
		if(ch=='Y'||ch=='y')
		{
           Tleft=(node*)malloc(sizeof(node));
           temp->left=Tleft;
			CreateBT(Tleft);
		}
		else{
		temp->left=NULL;
		CreateBT(NULL);
	}
		
		printf("\nDo you want to create  at right child (Y/N): ");
	   ch=getche();
		if(ch=='Y'||ch=='y')
		{
           Tright=(node*)malloc(sizeof(node));
           temp->right=Tleft;
			CreateBT(Tright);
		}
		else{
		temp->right=NULL;
		CreateBT(NULL);
	}
	}
}
void Inorder(node *ptr)
{
	if(ptr){
	
 	Inorder(ptr->left);
 	printf("%d\t",ptr->ele);
 	Inorder(ptr->right);
 }
}
void Preorder(node *ptr)
{
	if(ptr){
	printf("%d\t",ptr->ele);
 	Preorder(ptr->left);
 	Preorder(ptr->right);
}
}
void Postorder(node *ptr)
{
	if(ptr){
 	Postorder(ptr->left);
 	Postorder(ptr->right);
 	printf("%d\t",ptr->ele);
 }
}
node *SearchingBST(node *temp,int item)
{
   if(temp==NULL)
   return NULL;
   else if(item>temp->ele)
  	SearchingBST(temp->right,item);
  	else if(item<temp->ele)
  	SearchingBST(temp->left,item);
  	else
  	return temp;
}
node *getInSuccessor(node *ptr)
{
	while(ptr->left!=NULL)
	{
		ptr=ptr->left;
	}
	return ptr;
}
node *DeleteBST(node *p,int item)
{
	node *temp;
	if(!p)
	{
		printf("\nUnable to delete .\n");
		return p;
	}
	else if(item>p->ele)
	p->right=DeleteBST(p->right,item);
	else if(item<p->ele)
	p->right=DeleteBST(p->left,item);
	else{
		if(p->left==NULL){
			temp=p->right;
			free(p);
			return temp;
		}else
		if(p->right==NULL){
			temp=p->left;
			free(p);
			return temp;
		}
		temp=getInSuccessor(p->right);
		p->ele=temp->ele;
		p->right=DeleteBST(p->right,temp->ele);
	}
	return p;
}
void Graphs()
{
	system("cls");
	printf("Graphs are not build ,It will be completed soon\n");
	printf("Enter any key");
	getch();
}
void Trees()
{
	int ch,item,num,i;
	system("cls");
	printf("A tree data structure is defined as a collection of objects \nor entities known as nodes that are linked together to represent or simulate hierarchy. \nA tree data structure is a non-linear data structure because it does not store in a sequential manner.");
    printf("Now let us discus about Binary Tree \nA binary tree is a tree-type non-linear data structure with a maximum of two children for each parent.\n Every node in a binary tree has a left and right reference along with the data element.");
    while(1){
	printf("\n\nOperations of Binary Tree \n");
    printf("1.creating Binary Tree\n");
    printf("2.creating Binary Search Tree\n");
    printf("3.Inserting Binary Search Tree\n");
    printf("4.Delating Binary Search Tree\n");
    printf("5.Searching Binary Search Tree\n");
    printf("6.Display\n");
    printf("7.Inorder traversal\n");
    printf("8.preorder traversal\n");
    printf("9.Inorder traversal\n");
    printf("10.Sorting Binary Search Tree\n");
    printf("11.Help\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1: 
        root=(node*)malloc(sizeof(node));
		CreateBT(root);
    	break;
    	case 2:printf("\nEnter the number of nodes: ");
    	scanf("%d",&num);
    	for(i=0;i<num;i++){
    		printf("Enter the element to insert : ");
    		scanf("%d",&item);
		    CreateBST(item);
	}
    	break;
    	case 3: 
		printf("Enter the element to insert : ");
    		scanf("%d",&item);
		    CreateBST(item);
    	break;
    	case 4:printf("Enter the item to be deleted : ");
    	scanf("%d",&item);
		root=DeleteBST(root,item);
    	DisplayBT(root,1);
    	break;
    	case 5:printf("\nEnter the item to search: ");
    	scanf("%d",&item);
        if(SearchingBST(root,item)!=NULL)
        printf("\nItem found");
        else
        printf("\nItem not found");
    	break;
    	case 6:DisplayBT(root,1);
    	break;
    	case 7:Inorder(root);
    	break;
    	case 8:Preorder(root);
    	break;
    	case 9:Postorder(root);
    	break;
    	case 10:Inorder(root);
    	break;
    	case 11:helpTree();
    	break;
    	default:printf("\nInvalid choice\n");
    }
	}
    
}

int main()
{
	system("cls");
	displayScreen();
	getch();
	return 0;
}
