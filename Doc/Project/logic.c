#include<stdio.h>
#include<math.h>
// logic for AND
int AND(int x,int y)
{
    if(x==1 && y==1)
    return 1;
    else
    return 0;
}
// logic for OR gate
int OR(int x,int y)
{
    if(x==1 && y==1)
     return 1;
    if(x==1 && y==0 || x==0 && y==1)
     return 1;
    if(x==0 && y==0)
     return 0;
}
// logic for NOT
int NOT(int x)
{
    if(x==1)
      return 0;
    else
     return 1;
}
// logic of NAND
int NAND(int x,int y)
{
    if(x==1 && y==1)
     return 0;
     else
        return 1;
}
//logic for NOR
int NOR(int x,int y)
{
    if(x==1 && y==1)
     return 0;
    if(x==1 && y==0 || x==0 && y==1)
     return 0;
    if(x==0 && y==0)
     return 1;
}
//logic for XOR
int XOR(int x,int y)
{
    if(x==0 && y==0 || x==1 && y==1)
    return 0;
    if(x==1 && y==0 || x==0 && y==1)
    return 1;
}
//logic for XNOR
int XNOR(int x,int y)
{
    if(x==0 && y==0 || x==1 && y==1)
    return 1;
    if(x==1 && y==0 || x==0 && y==1)
    return 0;
}
int main()
{
    int ch,a,b;
    printf("1. AND\n");
    printf("2. OR\n");
    printf("3. NOT\n");
    printf("4. NAND\n");
    printf("5. NOR\n");
    printf("6. XOR\n");
    printf("7. XNOR\n");
    while(1)
    {
        printf("\nEnter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("AND GATE\n");
                    printf("Give two input 1 for true and 0 for false\n");
                    scanf("%d%d",&a,&b);
                    printf("Output is %d",AND(a,b));
                    break;
            case 2: printf("OR GATE\n");
                    printf("Give two input 1 for true and 0 for false\n");
                    scanf("%d%d",&a,&b);
                    printf("Output is %d",OR(a,b));
                    break;
            case 3: printf("NOT GATE\n");
                    printf("Give an input 1 for true and 0 for false\n");
                    scanf("%d",&a);
                    printf("Output is %d",NOT(a));
                    break;
            case 4: printf("NAND GATE\n");
                    printf("Give two input 1 for true and 0 for false\n");
                    scanf("%d%d",&a,&b);
                    printf("Output is %d",NAND(a,b));
                    break;
            case 5 :printf("NOR GATE\n");
                    printf("Give two input 1 for true and 0 for false\n");
                    scanf("%d%d",&a,&b);
                    printf("Output is %d",NOR(a,b));
                    break;
            case 6: printf("XOR GATE\n");
                    printf("Give two input 1 for true and 0 for false\n");
                    scanf("%d%d",&a,&b);
                    printf("Output is %d",XOR(a,b));
                    break;
            case 7: printf("XNOR GATE\n");
                    printf("Give two input 1 for true and 0 for false\n");
                    scanf("%d%d",&a,&b);
                    printf("Output is %d",XNOR(a,b));
                    break;
            default: printf("Enter valid choice\n");
        }
    }
}
