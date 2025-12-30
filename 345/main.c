#include <stdio.h>
#include <math.h>
double len(int a,int b,int c,int d)
{
    double l;
    l=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    return l;
}

int main()
{
    int ax,ay,bx,by,cx,cy;
    double ab,ac,bc;
    printf("Please input ax,ay bx,by cx,cy:\n");
    scanf("%d,%d %d,%d %d,%d",&ax,&ay,&bx,&by,&cx,&cy);
    ab=len(ax,ay,bx,by);
    ac=len(ax,ay,cx,cy);
    bc=len(bx,by,cx,cy);
    if(ab+ac<=bc||ab+bc<=ac||bc+ac<=ab)
    {
        printf("Output:\nIt can't be a Triangle!\n");
        return 0;
    }
    if((ab*ab)+(ac*ac)==(bc*bc)||(ab*ab)+(bc*bc)==(ac*ac)||(bc*bc)+(ac*ac)==(ab*ab))
    {
        printf("Output:\nYES\n%.2f\n",ab+ac+bc);
    }
    if((ab*ab)+(ac*ac)!=(bc*bc)&&(ab*ab)+(bc*bc)!=(ac*ac)&&(bc*bc)+(ac*ac)!=(ab*ab))
    {
        printf("Output:\nNO\n%.2f",ab+ac+bc);
    }
    return 0;
}
