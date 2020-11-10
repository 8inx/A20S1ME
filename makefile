
CC := g++
CFLAGS := -Wall -g
RUN := ./run.sh


%: ./Exercises/%.cpp
	@g++ $^ -o ./Output/$@
	@$(CC) $(CFLAGS) $^ -o ./Output/$@
	@$(RUN) ./Output/$@

clrx:
	@rm -rf ./Output/exer*

#run.sh computes process time12
#@time -f "\n\n\n Execution time: %Es" $(EXECUTABLE)