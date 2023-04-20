#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
  int data;
 struct node* left;
struct node* right;
};
int x;
char u[100000000];
int s[100000000];
void initiate(){
for(int k=0;k<=strlen(u);k++){
  u[k]=0;
  s[k]=0;
}

}
void count(){
int ret=0;
  for(int a=0;a<100000000;a++){
    if(s[a]>0){
      ret++;
    }
  }
  //printf("the count is : %d\n",ret);
  s[0]=ret;
  }
struct node* createnode(int id){
  if(id!=-1){

 struct node *n=NULL;
    n=(struct node*)malloc(sizeof(struct node));
 int w=2*id+1;
 int y=2*id+2;
   if(w>=x||s[id]==0){
   //  printf("w: %d s[id]: %d\n",w,s[id]);
  //   printf("address of n: %d at index %d\n",n ,id);
  //   printf("storing %d at index %d\n",s[id],id);
     n->data=s[id];
       return n;
   }
 //  printf("the address of n is %d now at index %d\n",n,id);
    if(w<x){
        if(s[w]!=0){
          //  printf("now checking 2i+1 which is %d\n",w);

             n->left=createnode(w);
       //  printf("%d\n",n->left);
          //   printf("this is index %d\n",id);
        }

    }
   // printf("now storing %d , index %d \n",s[id],id);
    n->data=s[id];
    if(y>=x||s[id]==0){
      return n;
    }

    if(y<x){
        if(s[y]!=0){
           //printf("now checking 2i+2\n");
            n->right=createnode(y);
        }
    }
      return n;
  }else{
    return NULL;
  }
}

void inorder(struct node *root){
 ;

 // printf("count: %d\n",c);
    if(root!=NULL){

       inorder(root->left);
  printf("the s0 is %d\n",s[0]);

      if(s[0]>1){

       // printf("s[0]:%d\n",s[0]);
         printf("%d ",root->data);

        s[0]--;
      }else{
        printf("%d",root->data);

      }







        inorder(root->right);

    }


}
int main(void) {
    int p;
//char delimiter[]=' ';

  printf("enter num of test case:\n");
    scanf("%d",&p);
  for(int o=0;o<p;o++){
    initiate();
 printf("enter x\n");
  scanf("%d",&x);
  getchar();
  printf("enter string\n");
  gets(u);
  printf(" i am here\n");
  //turning character line into int array
 int i=0,m=0,temp=0;
  while(u[i]!=0){
    if(u[i]!=' '){
      temp=temp*10+(u[i]-'0');
   //   printf("this is temp: %d\n",temp);
    }
    if(u[i]==' '||u[i+1]==0){
    //  printf("storing %d int s\n",temp);
      s[m++]=temp;
      temp=0;
    }
    i++;
  }

   // for(int i=0;i<4;i++){
    //  printf("index %d: %d\n",i,s[i]);
   // }

 // printf("the string is %s",s);
  printf(" i am here\n");
 struct node* root;
 root=NULL;
  root=createnode(0);
  count();

 inorder(root);
 printf(" i am here222\n");
    }
  return 0;
}
