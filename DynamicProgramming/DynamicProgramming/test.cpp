// 1.Fibonacci
// 
//class Solution {
//public:
//    int fib(int n) {
//        if (n == 0)
//        {
//            return 0;
//        }
//
//        if (n == 1 || n == 2)
//        {
//            return 1;
//        }
//
//        int f = 0, f1 = 1, f2 = 1;
//        for (int i = 3; i <= n; ++i)
//        {
//            f = f1 + f2;
//            f1 = f2;
//            f2 = f;
//        }
//        return f;
//    }
//};




// 2.���ʷָ�(https://leetcode.cn/problems/word-break/)
// �����ٿ���




// 3.��������С·����
/*class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int row = triangle.size();

        for (int i = 1; i < row; ++i)
        {
            for (int j = 0; j <= i; ++j)
            {
                if (j == 0)
                {
                    triangle[i][j] += triangle[i - 1][j];
                }
                else if (j == i)
                {
                    triangle[i][j] += triangle[i - 1][j - 1];
                }
                else
                {
                    triangle[i][j] += min(triangle[i - 1][j - 1], triangle[i - 1][j]);
                }
            }
        }

        int minRet = triangle[row - 1][0];
        for (int i = 1; i < triangle[row - 1].size(); ++i)
        {
            minRet = min(minRet, triangle[row - 1][i]);
        }

        return minRet;
    }
};

tips : ����[0, 0]��[i, j]�����·������һ����ά����Ķ�Ӧ����[i, j]��������ά�����ȫ�����궼�����
       �ٱ�����ά��������һ�У��ҵ���Сֵ������Сֵ��Ϊ�����ε���С·���͡�*/ 