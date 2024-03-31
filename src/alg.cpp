// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int cnt = 0;
  int lt = 0;
  int rt = size-1;
  while (lt <= rt) {
    int mdl = lt + (rt - lt) / 2;
    if (arr[mdl] == value) {
        cnt++;
        int i = mdl + 1;
        while (i < size && arr[i] == value) {
            cnt++;
            i++;
        }
        i = mdl - 1;
        while (i >= 0 && arr[i] == value) {
            cnt++;
            i--;
        }
        break;
    }
    if (arr[mdl] < value)
        lt = mdl + 1;
    if (arr[mdl] > value)
        rt = mdl - 1;
  }
  return cnt;
}
