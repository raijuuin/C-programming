#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16, n17, n18, n19, n20, res1, res2;
	
	printf("Digite 20 numeros separados por espaco (Ex: 1 2 3 4...): ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16, &n17, &n18, &n19, &n20);
	
	if(n1%2==0){
		res1 +=n1;
		if(n1%2!=0){
			res2 *=n1;
		}
	}
	if(n2%2==0){
		res1 +=n2;
		if(n2%2!=0){
			res2 *=n2;
		}
	}
	if(n3%2==0){
		res1 +=n3;
		if(n3%2!=0){
			res2 *=n3;
		}
	}
	if(n4%2==0){
		res1 +=n4;
		if(n4%2!=0){
			res2 *=n4;
		}
	}
	if(n5%2==0){
		res1 +=n5;
		if(n5%2!=0){
			res2 *=n5;
		}
	}
	if(n6%2==0){
		res1 +=n6;
		if(n6%2!=0){
			res2 *=n6;
		}
	}
	if(n7%2==0){
		res1 +=n7;
		if(n7%2!=0){
			res2 *=n7;
		}
	}
	if(n8%2==0){
		res1 +=n8;
		if(n8%2!=0){
			res2 *=n8;
		}
	}
	if(n9%2==0){
		res1 +=n9;
		if(n9%2!=0){
			res2 *=n9;
		}
	}
	if(n10%2==0){
		res1 +=n10;
		if(n10%2!=0){
			res2 *=n10;
		}
	}
	if(n11%2==0){
		res1 +=n11;
		if(n11%2!=0){
			res2 *=n11;
		}
	}
	if(n12%2==0){
		res1 +=n12;
		if(n12%2!=0){
			res2 *=n12;
		}
	}
	if(n13%2==0){
		res1 +=n13;
		if(n13%2!=0){
			res2 *=n13;
		}
	}
	if(n14%2==0){
		res1 +=n14;
		if(n14%2!=0){
			res2 *=n14;
		}
	}
	if(n15%2==0){
		res1 +=n15;
		if(n15%2!=0){
			res2 *=n15;
		}
	}
	if(n16%2==0){
		res1 +=n16;
		if(n16%2!=0){
			res2 *=n16;
		}
	}
	if(n17%2==0){
		res1 +=n17;
		if(n17%2!=0){
			res2 *=n17;
		}
	}
	if(n18%2==0){
		res1 +=n18;
		if(n18%2!=0){
			res2 *=n18;
		}
	}
	if(n19%2==0){
		res1 +=n19;
		if(n19%2!=0){
			res2 *=n19;
		}
	}
	if(n20%2==0){
		res1 +=n20;
		if(n20%2!=0){
			res2 *=n20;
		}
	}
	printf("\nSoma dos pares: %d", res1);
	printf("\nProduto dos impares: %d", res2);
	getch();
}
