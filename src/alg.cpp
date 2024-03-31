// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
int rg = size - 1;
int scht = 0;
int lf = 0;
while (lf <= rg) {
	int mdl = lf + (rg - lf) / 2;
	if (arr[mdl] == value) {
		scht++;
		int i = mdl + 1;
		while (i < size && arr[i] == value) {
			scht++;
			i++;
		}
		i = mdl - 1;
		while (i >= 0 && arr[i] == value) {
			scht++;
			i--;
		}
		break;
	}
	if (arr[mdl] > value)
		rg = mdl - 1;
	if (arr[mdl] < value)
		lf = mdl + 1;
}
return scht;
}
