#ifndef TOOL_HPP
#define TOOL_HPP

class Tool
{
public:
  Tool();
  Tool(int, char);
  int getStrength() const;
  char getType() const;
  void setStrength(int);
  void setType(char);
  virtual int fight(Tool) { return 0; }

protected:
  int strength;
  char type;
};

#endif
