#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
void print(queue<int>q) {
	
}
int main() {
	queue<int>q;
	int n;
	scanf("%d",&n);
	while (n--) {
		int x, y;
		scanf("%d",&x);
		if (x == 1) {
			scanf("%d",&y);
			q.push(y);
		}
		else if (x == 2) {
			if (!q.empty()) {
				q.pop();
			}
		}
		else {
			if (!q.empty()) {
				int z = q.front();
				printf("%d\n",z);
			}
			else {
				
					printf("Empty!\n");
			}
		}
	}
}
