#include "antcolonysystem.h"
#include"ant_path.h"
//计算当前节点到下一节点转移的概率
double AntColonySystem::Transition(int i, int j)
{
    if (i != j)
    {
        return (pow(info[i][j], alpha) * pow(visible[i][j], beta));
    }
    else
    {
        return 0.0;
    }
}
//局部更新规则
void AntColonySystem::UpdateLocalPathRule(int i, int j)
{
    info[i][j] = (1.0 - alpha1) * info[i][j] + alpha1 * (1.0 / (N * Lnn));
    info[j][i] = info[i][j];
}
//初始化
void AntColonySystem::InitParameter(double value)
{
    //初始化路径上的信息素强度tao0
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            info[i][j] = value;
            info[j][i] = value;
            if (i != j)
            {
                visible[i][j] = 1.0 / allDistance[i][j];
                visible[j][i] = visible[i][j];
            }
        }
    }
}

//全局信息素更新
void AntColonySystem::UpdateGlobalPathRule(int* bestTour, int globalBestLength)
{
    for (int i = 0; i < N; i++)
    {
        int row = *(bestTour + 2 * i);
        int col = *(bestTour + 2 * i + 1);
        info[row][col] = (1.0 - rou) * info[row][col] + rou * (1.0 / globalBestLength);
        info[col][row] = info[row][col];
    }
}
