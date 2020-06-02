//
// Created by Kina on 2020/05/31.
//

#ifndef DATASTRUCTURES_POINT_H
#define DATASTRUCTURES_POINT_H

typedef struct _point{
    int xpos;
    int ypos;
} Point;

void SetPointPos(Point * ppos, int xpos, int ypos);

void ShowPointPos(Point * ppos);

int PointComp(Point * pos1, Point * pos2);

#endif //DATASTRUCTURES_POINT_H
