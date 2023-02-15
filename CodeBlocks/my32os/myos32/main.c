#include <iostream>


using namespace std;

class Kernel {
 public:
  void Boot();
  void Run();

 private:
  void PrintWelcomeMessage();
  void ProcessCommand(const string& command);
};

void Kernel::Boot() {
  cout << "Booting MyOS...\n";
}

void Kernel::Run() {
  cout << "MyOS is now running...\n";

  PrintWelcomeMessage();

  while (true) {
    string command;
    cout << "MyOS> ";
    getline(cin, command);

    ProcessCommand(command);
  }
}

void Kernel::PrintWelcomeMessage() {
  cout << "Welcome to MyOS!\n";
  cout << "This is a basic 32-bit operating system.\n";
}

void Kernel::ProcessCommand(const string& command) {
  if (command == "help") {
    cout << "Available commands:\n";
    cout << "help - Display this message\n";
    cout << "exit - Exit MyOS\n";
  } else if (command == "exit") {
    exit(0);
  } else {
    cout << "Unknown command. Type 'help' for a list of available commands.\n";
  }
}

int main() {
  Kernel my_os;
  my_os.Boot();
  my_os.Run();

  return 0;
}
