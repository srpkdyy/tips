#include <vector>
using namespace std;


class UnionFind {
private:
   int N;
   vector<int> par;

public:
   UnionFind(int n): N(n) {
      par.resize(n, -1);
   }

   inline int root(const int x) {
      if (par[x] < 0) return x;
      return par[x] = root(par[x]);
   }

   inline bool unite(int x, int y) {
      x = root(x), y = root(y);
      if (x == y) return false;

      if (x > y) swap(x, y);
      par[x] += par[y];
      par[y] = x;
      
      return true;
   }

   inline bool same(const int x, const int y) {
      return root(x) == root(y);
   }
};
