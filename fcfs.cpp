#include <iostream>

struct ganttChartData {
  int arrival, start, end;
  ganttChartData() : arrival(0), start(0), end(0) {}
};

int main() {
  std::pair<int, int>* processes;
  ganttChartData* ganttChart;
  int n;
  std::cout << "Enter the number of processes ";
  std::cin >> n;
  processes = new std::pair<int, int>[n];
  ganttChart = new ganttChartData[n];

  std::cout << "Enter the processes arrive Time and Burst time\n";

  for (int i = 0; i < n; i++) {  // process array input
    int arriveTime, burst;
    std::cin >> arriveTime >> burst;
    processes[i] = std::make_pair(arriveTime, burst);
    ganttChart[i].arrival = arriveTime;
  }
  ganttChart[0].end = processes[0].second;

  for (int i = 0; i < n - 1; i++) {
    ganttChart[i + 1].start = ganttChart[i].end;
    ganttChart[i + 1].end = ganttChart[i + 1].start + processes[i + 1].second;
  }
  int waiting = 0;
  int turnSum = 0;

  for (int i = 0; i < n; i++) {
    waiting += (ganttChart[i].start - ganttChart[i].arrival);
    turnSum += (ganttChart[i].end - ganttChart[i].arrival);
  }
  std::cout << "average waitning = " << (float)waiting / n
            << "\naverage turnAround Time = " << (float)turnSum / n;
}