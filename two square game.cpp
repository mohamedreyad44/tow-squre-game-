#include <iostream>
using namespace std;
int main()
{
    string board[17] = { "0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16" };
    cout << board[1] << "\t" << board[2] << "\t" << board[3] << "\t" << board[4] << "\n" << "\n" << board[5] << "\t" << board[6] << "\t" << board[7] << "\t" << board[8] << "\n" << "\n" << board[9] << "\t" << board[10] << "\t" << board[11] << "\t" << board[12] << "\n" << "\n" << board[13] << "\t" << board[14] << "\t" << board[15] << "\t" << board[16] << "\n" << "\n";
    int turn = 1;
    int m, n;
    while (true)
    {
        if (turn == 1)
        {
            cout << "enter square num : " << "(player 1)" << "\n ";
        }
        else
            cout << "enter square num : " << "(player 2)" << "\n ";

            cin >> m >> n;

            if ((((m > 0 && (m <= 16)) && (n > 0) && (n <= 16)) && ((board[m] != "x") && (board[n] != "x"))) && (((n > m) && (n - m == 1) && (m % 4 != 0)) || ((n > m) && (n - m == 4)) || ((m > n) && (m - n == 1) && (n % 4 != 0)) || ((m > n) && (m - n == 4))))
            {
                board[m] = "x";
                board[n] = "x";
                cout << board[1] << "\t" << board[2] << "\t" << board[3] << "\t" << board[4] << endl << board[5] << "\t" << board[6] << "\t" << board[7] << "\t" << board[8] << endl << board[9] << "\t" << board[10] << "\t" << board[11] << "\t" << board[12] << endl << board[13] << "\t" << board[14] << "\t" << board[15] << "\t" << board[16] << endl;

            }
            else
                while (true)
                {
                    cout << "enter another two num & they must be above or beside each other : \n ";
                    cin >> m >> n;
                    if ((((m > 0 && (m <= 16)) && (n > 0) && (n <= 16)) && ((board[m] != "x") && (board[n] != "x"))) && (((n > m) && (n - m == 1) && (m % 4 != 0)) || ((n > m) && (n - m == 4)) || ((m > n) && (m - n == 1) && (n % 4 != 0)) || ((m > n) && (m - n == 4))))
                    {
                        board[m] = "x";
                        board[n] = "x";
                        cout << board[1] << "\t" << board[2] << "\t" << board[3] << "\t" << board[4] << endl << board[5] << "\t" << board[6] << "\t" << board[7] << "\t" << board[8] << endl << board[9] << "\t" << board[10] << "\t" << board[11] << "\t" << board[12] << endl << board[13] << "\t" << board[14] << "\t" << board[15] << "\t" << board[16] << endl;
                        break;
                    }
                }
            int cnt = 0;
            for (int i = 1; i < 17; i++) {
                if ((((i == 16) || (board[i + 1] == "x")) && (i >= 13 || (board[i + 4] == "x"))) || (board[i] == "x"))
                    cnt++;
            }
            if (cnt == 16) {
                if (turn == 1)
                    cout << " player1 wins the game  \n";

                else
                    cout << " player2 wins the game  \n";
                break;
            }
            if (turn == 1)
                turn = 2;
            else
                turn = 1;
        }





        return 0;
}

