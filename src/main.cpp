#include <iostream>
#include "calculator_engine.h"

using namespace std;

int main()
{
  CalculatorEngine calculatorEngine;
  std::string operation;
  double operandA;
  double operandB;
  double result;

  CalculatorEngine::start();

  while (true) {
    cerr <<  "Enter operation: ";
    cin >> operation;
    if (operation == "exit") {
      break;
    }
    if (!CalculatorEngine::isOperationSupported(operation)) {
      cerr << "Operation not supported" << endl;

    }
    else {
      cout << "operandA: ";
      cin >> operandA;
      cout << "operandB: ";
      cin >> operandB;
      result = CalculatorEngine::runOperation(operation, operandA, operandB);
      cout << "Result: " << result << endl;
    }
  }

  CalculatorEngine::stop();

  pthread_exit(nullptr);

  return 0;
}
