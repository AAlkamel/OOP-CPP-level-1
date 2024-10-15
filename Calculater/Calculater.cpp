

#include <iostream>
using namespace std;

class clsCalculator {
private:
    int _result =0;
    int _lastNumber;
    int _prevResult;
    string _prevOpration;

    bool _IsZero(int number) {
        return number == 0;
    }
public:
    void Add(int number){
        _lastNumber = number;
        _prevOpration = "Add";
        _prevResult = _result;
        _result += number;
    }
    void Subtract(int number) {
        _lastNumber = number;
        _prevOpration = "subtracut";
        _prevResult = _result;
        _result -= number;
    }
    void Multiply(int number) {
        _lastNumber = number;
        _prevOpration = "mutiply";
        _prevResult = _result;
        _result *= number;
    }
    void Divid(int number) {
        _lastNumber = number;
        _prevOpration = "divid";
        _prevResult = _result;
        if (!_IsZero(number)) {
        _result /= number;

        }
        else {
            cout << "\nErrore Can not divid on Zero \n";

        }
    }
    void Clear() {
        _prevOpration = "clear";
        _prevResult = _result;
        _result = 0;
    }


    void CancelLastOperation()
    {
        _lastNumber = 0;
        _prevOpration = "Cancelling Last Operation";
        _result = _prevResult;
    }
    void PrintResult()
    {
        cout << "Result ";
        cout << "After " << _prevOpration << " " <<
            _lastNumber << " is: " << _result << "\n";
    }
};
int main()
{
    clsCalculator Calculator1;
    Calculator1.Clear();
    Calculator1.Add(10);
    Calculator1.PrintResult();
    Calculator1.Add(100);
    Calculator1.PrintResult();
    Calculator1.Subtract(20);
    Calculator1.PrintResult();
    Calculator1.Divid(0);
    Calculator1.PrintResult();
    Calculator1.Divid(2);
    Calculator1.PrintResult();
    Calculator1.Multiply(3);
    Calculator1.PrintResult();
    Calculator1.CancelLastOperation();
    Calculator1.PrintResult();
    Calculator1.Clear();
    Calculator1.PrintResult();
    system("pause>0");
    return 0;
}