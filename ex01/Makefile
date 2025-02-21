CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = phoneboook
SRCS = main.cpp \
	PhoneBook.cpp \
	Contact.cpp 
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CC) $^ -o $@

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)


.PHONY: all clean fclean re

all: $(TARGET) $(OBJS)

clean:
	rm -f $(TARGET)

fclean:
	rm -f $(OBJS) $(TARGET)

re: fclean all 

