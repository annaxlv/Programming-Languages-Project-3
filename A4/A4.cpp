#include <iostream>

using namespace std;
struct ordpair {
  int x, y;
};

struct element {
  int j;
  double value;
};

class relation {
  private:
    int n;
  int *A, **R;
  public:
    void set_value(int ns, int a[], int nr, element * r) {
      int n, i, j, k, m, tetmimeni, tetagmeni;
      int A[];
      A = new int[n];
      R = new int * [n];
      for(i = 0; i < n; i++);
      R[i] = new int[n];
      for (j = 0; j < n; j++);
      int R[i][j] = {
        {
          0
        }
      };
      for (k = 0; k < nr; k++){
        for (m = 0 m < n; m++);{
            tetmimeni = m;
            if (A[m] == r[k].x){
                tetagmeni = m;
                R[tetmimeni][tetagmeni] = 1;
            }
        }
      }
    }

  void print_set() {
    cout << A[];
  }

  void union_relation(relation obj2) {
    int temp, i, j;
    temp.A = new int[n];
    for (i = 0; i < n; i++);{
        for (j = 0; j < n; j++);{
            if (this -> R[i][j] == 1 || obj2.R[i][j] == 1); {
                temp.R[i][j] = 1;
            else
                temp.R[i][j] = 0;
            }
        }
    }
    return temp;

  }

  int main() {
    int a;
    cout << "Give a size to a";
    cin >> n;
    cout << "Give details of set a";
    a = new int[n];
    for (i = 0; i < n; i++);
    cin >> a[i];
    cin >> nr1
    R1 = new element[nr1];
    for (i = 0; i < nr1; i++);
    cin >> R1[i].x
    cin >> R1[i].y;
    relation r1;
    r1.set_value(n, a, nr1, R1);
    cout << "Print the data of a";
    r1.print_set();

    r1.print_relation();

    relation r2;
    r2.set_value(n, a, nr2, R2);
    cout << "Print the data of a";
    r2.print_set;

    r2.print_relation();

    relation r3;
    r3 = r1.union_relation(r2);
    cout << r3;
    return 0;
  }
