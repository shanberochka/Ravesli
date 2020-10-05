#include <iostream>
#include <cassert>

class Stack
{
  public:
  int m_arr[10];
  int m_len;
  
  void reset()
  {
    m_len = 0;
    for (int i = 0; i<10; ++i)
    {
        m_arr[i] = 0;
    }
  }
  
  bool push(int value)
  {
    if (m_len == 10)  
    return false;

    m_arr[m_len++] = value;
    return true;
  }
  
  int pop()
  {
      assert (m_len > 0);
      
      return m_arr[--m_len];
  }
  
  void print()
  {
      std::cout << "( ";
      for (int i =0; i<m_len; i++)
      {
          std::cout << m_arr[i] << " ";
      }
      std::cout << " )\n";
  }
};


void ex3() 
{
    Stack stack;
	stack.reset();
 
	stack.print();
 
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();
 
}