#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d", &t);
	
	while(t--){
	    int x,y,z;
	    scanf("%d%d%d", &x,&y,&z);
	    
	    int courses=x;
	    int units=x*y;
	    int chapters=units*z;
	    
	    printf("%d \n", chapters);
	}
	return 0;
}

