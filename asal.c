# include<stdio.h>
int main(){
	int count,a=0,num;
	

while(num!=-1){
	a=0;
	scanf("%d",&num);
	
	for(count=1;count<=num;count++){
		if (num%count==0){
				a++;
		}
		
		else{
				a=a;
		}	
			
	}
		
	if (a==2){
			
		printf("%d sayisi asaldir\n",num);
		}
		else{
			printf("%d sayisi asal degildir\n",num);
		}
	
}	

return 0;
}
