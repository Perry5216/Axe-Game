#include "raylib.h"
#include <stdlib.h>

int main()
{
    // Set the Window
    int Width = 1920;
    int Height = 1080;
    InitWindow(Width, Height, "Axe Game");

    float Rotation = 0.0f;

    // Set the Circle and its edges
    int CircleX = 100;
    int CircleY = 100;
    int CircleRadius = 25;
    int RCircle = CircleX + CircleRadius;
    int LCircle = CircleX - CircleRadius;
    int UCircle = CircleY - CircleRadius;
    int DCircle = CircleY + CircleRadius;

    // Set the Axes and their edges
    int AxeX = 500;
    int AxeY = 0;
    int AxeLength = 40;
    int RAxe = AxeX + AxeLength;
    int LAxe = AxeX;
    int UAxe = AxeY;
    int DAxe = AxeY + AxeLength;

    int Axe1X = 1000;
    int Axe1Y = 0;
    int Axe1Length = 60;
    int RAxe1 = Axe1X + Axe1Length;
    int LAxe1 = Axe1X;
    int UAxe1 = Axe1Y;
    int DAxe1 = Axe1Y + Axe1Length;

    int Axe2X = 1500;
    int Axe2Y = 0;
    int Axe2Length = 80;
    int RAxe2 = Axe2X + Axe2Length;
    int LAxe2 = Axe2X;
    int UAxe2 = Axe2Y;
    int DAxe2 = Axe2Y + Axe2Length;

    // Set the Plats and their edges
    int PlatX = 0;
    int PlatY = 350;
    int PlatW = 150;
    int PlatH = 50;
    int RPlat = PlatX + PlatW;
    int LPlat = PlatX;
    int UPlat = PlatY;
    int DPlat = PlatY + PlatH;

    int Plat1X = 0;
    int Plat1Y = 700;
    int Plat1W = 300;
    int Plat1H = 50;
    int RPlat1 = PlatX + Plat1W;
    int LPlat1 = Plat1X;
    int UPlat1 = Plat1Y;
    int DPlat1 = Plat1Y + Plat1H;

    // Set the Edges
    int EdgeSupX = 0;
    int EdgeSupY = 0;
    int EdgeSupW = 1920;
    int EdgeSupH = 25;
    int EdgeSup = EdgeSupY + EdgeSupH;

    int EdgeInfX = 0;
    int EdgeInfY = 1055;
    int EdgeInfW = 1920;
    int EdgeInfH = 25;
    int EdgeInf = EdgeInfY;

    int EdgeSxX = 0;
    int EdgeSxY = 0;
    int EdgeSxW = 25;
    int EdgeSxH = 1080;
    int EdgeSx = EdgeSxX + EdgeSxW;

    int EdgeDxX = 1895;
    int EdgeDxY = 0;
    int EdgeDxW = 25;
    int EdgeDxH = 1080;
    int EdgeDx = EdgeDxX;

    // Set the Obsts and their edges
    int ObstX = 25;
    int ObstY = 200;
    int ObstW = 500;
    int ObstH = 400;
    int RObst = ObstX + ObstW;
    int LObst = ObstX;
    int UObst = ObstY;
    int DObst = ObstY + ObstH;

    int Obst1X = 625;
    int Obst1Y = 25;
    int Obst1W = 100;
    int Obst1H = 625;
    int RObst1 = Obst1X + Obst1W;
    int LObst1 = Obst1X;
    int UObst1 = Obst1Y;
    int DObst1 = Obst1Y + Obst1H;

    int Obst2X = 25;
    int Obst2Y = 900;
    int Obst2W = 1035;
    int Obst2H = 155;
    int RObst2 = Obst2X + Obst2W;
    int LObst2 = Obst2X;
    int UObst2 = Obst2Y;
    int DObst2 = Obst2Y + Obst2H;

    int Obst3X = 1060;
    int Obst3Y = 400;
    int Obst3W = 50;
    int Obst3H = 655;
    int RObst3 = Obst3X + Obst3W;
    int LObst3 = Obst3X;
    int UObst3 = Obst3Y;
    int DObst3 = Obst3Y + Obst3H;

    int Obst4X = 725;
    int Obst4Y = 25;
    int Obst4W = 1170;
    int Obst4H = 200;
    int RObst4 = Obst4X + Obst4W;
    int LObst4 = Obst4X;
    int UObst4 = Obst4Y;
    int DObst4 = Obst4Y + Obst4H;

    int Obst5X = 1110;
    int Obst5Y = 400;
    int Obst5W = 600;
    int Obst5H = 50;
    int RObst5 = Obst5X + Obst5W;
    int LObst5 = Obst5X;
    int UObst5 = Obst5Y;
    int DObst5 = Obst5Y + Obst5H;

    int Obst6X = 1400;
    int Obst6Y = 600;
    int Obst6W = 495;
    int Obst6H = 250;
    int RObst6 = Obst6X + Obst6W;
    int LObst6 = Obst6X;
    int UObst6 = Obst6Y;
    int DObst6 = Obst6Y + Obst6H;

    // Set the CoinBox and its Edges
    int CoinBoxX = 1745;
    int CoinBoxY = 905;
    int CoinBoxLength = 70;
    int RCoinBox = CoinBoxX + CoinBoxLength;
    int LCoinBox = CoinBoxX;
    int UCoinBox = CoinBoxY;
    int DCoinBox = CoinBoxY + CoinBoxLength;

    // Set the Coin
    float CoinX = 1780.0f;
    float CoinY = 940.0f;
    int CoinDim = 35;

    // Set Actors' movement
    int DirAxe = 15;
    int DirAxe1 = 15;
    int DirAxe2 = 15;
    int DirPlat = 15;
    int DirPlat1 = 15;

    // Set Collisions
    bool CollisionAxe = // Axe->Circle
        RAxe >= LCircle &&
        LAxe <= RCircle &&
        UAxe <= DCircle &&
        DAxe >= UCircle;

    bool CollisionAxe1 = // Axe1->Circle
        RAxe1 >= LCircle &&
        LAxe1 <= RCircle &&
        UAxe1 <= DCircle &&
        DAxe1 >= UCircle;

    bool CollisionAxe2 = // Axe2->Circle
        RAxe2 >= LCircle &&
        LAxe2 <= RCircle &&
        UAxe2 <= DCircle &&
        DAxe2 >= UCircle;

    bool CollisionPlat = // Plat->Circle
        RPlat >= LCircle &&
        LPlat <= RCircle &&
        UPlat <= DCircle &&
        DPlat >= UCircle;

    bool CollisionPlat1 = // Plat1->Circle
        RPlat1 >= LCircle &&
        LPlat1 <= RCircle &&
        UPlat1 <= DCircle &&
        DPlat1 >= UCircle;

    bool ObstCollision = // Obst->Circle
        RObst >= LCircle &&
        LObst <= RCircle &&
        UObst <= DCircle &&
        DObst >= UCircle;

    bool Obst1Collision = // Obst1->Circle
        RObst1 >= LCircle &&
        LObst1 <= RCircle &&
        UObst1 <= DCircle &&
        DObst1 >= UCircle;

    bool Obst2Collision = // Obst2->Circle
        RObst2 >= LCircle &&
        LObst2 <= RCircle &&
        UObst2 <= DCircle &&
        DObst2 >= UCircle;

    bool Obst3Collision = // Obst3->Circle
        RObst3 >= LCircle &&
        LObst3 <= RCircle &&
        UObst3 <= DCircle &&
        DObst3 >= UCircle;

    bool Obst4Collision = // Obst4->Circle
        RObst4 >= LCircle &&
        LObst4 <= RCircle &&
        UObst4 <= DCircle &&
        DObst4 >= UCircle;

    bool Obst5Collision = // Obst5->Circle
        RObst5 >= LCircle &&
        LObst5 <= RCircle &&
        UObst5 <= DCircle &&
        DObst5 >= UCircle;

    bool Obst6Collision = // Obst->Circle
        RObst6 >= LCircle &&
        LObst6 <= RCircle &&
        UObst6 <= DCircle &&
        DObst6 >= UCircle;

    bool CoinBoxCollision = // CoinBox->Circle
        RCoinBox >= LCircle &&
        LCoinBox <= RCircle &&
        UCoinBox <= DCircle &&
        DCoinBox >= UCircle;

    // Set the Collision with the Edges
    bool CollisionEdgeSup = EdgeSup >= UCircle;
    bool CollisionEdgeInf = EdgeInf <= DCircle;
    bool CollisionEdgeSx = EdgeSx >= LCircle;
    bool CollisionEdgeDx = EdgeDx <= RCircle;

    // Game Logic
    SetTargetFPS(60);
    while (WindowShouldClose() == false)
    {
        BeginDrawing();

        ClearBackground(BLACK);

        Rotation += 0.5f;

        // Game Dinamics
        if (CollisionAxe)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (CollisionAxe1)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (CollisionAxe2)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (CollisionPlat)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (CollisionPlat1)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (CollisionEdgeSup)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (CollisionEdgeInf)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (CollisionEdgeSx)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (CollisionEdgeDx)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (ObstCollision)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (Obst1Collision)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (Obst2Collision)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (Obst3Collision)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (Obst4Collision)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (Obst5Collision)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (Obst6Collision)
        {
            DrawText("YOU LOSE", 850, 540, 50, RED);
        }
        else if (CoinBoxCollision)
        {
            DrawText("YOU WIN", 850, 540, 50, LIME);
        }
        else
        {
            // Update Edges and Collisions
            RCircle = CircleX + CircleRadius;
            LCircle = CircleX - CircleRadius;
            UCircle = CircleY - CircleRadius;
            DCircle = CircleY + CircleRadius;

            RAxe = AxeX + AxeLength;
            LAxe = AxeX;
            UAxe = AxeY;
            DAxe = AxeY + AxeLength;
            CollisionAxe =
                RAxe >= LCircle &&
                LAxe <= RCircle &&
                UAxe <= DCircle &&
                DAxe >= UCircle;

            RAxe1 = Axe1X + Axe1Length;
            LAxe1 = Axe1X;
            UAxe1 = Axe1Y;
            DAxe1 = Axe1Y + Axe1Length;
            CollisionAxe1 =
                RAxe1 >= LCircle &&
                LAxe1 <= RCircle &&
                UAxe1 <= DCircle &&
                DAxe1 >= UCircle;

            RAxe2 = Axe2X + Axe2Length;
            LAxe2 = Axe2X;
            UAxe2 = Axe2Y;
            DAxe2 = Axe2Y + Axe2Length;
            CollisionAxe2 =
                RAxe2 >= LCircle &&
                LAxe2 <= RCircle &&
                UAxe2 <= DCircle &&
                DAxe2 >= UCircle;

            RPlat = PlatX + PlatW;
            LPlat = PlatX;
            UPlat = PlatY;
            DPlat = PlatY + PlatH;
            CollisionPlat =
                RPlat >= LCircle &&
                LPlat <= RCircle &&
                UPlat <= DCircle &&
                DPlat >= UCircle;

            RPlat1 = Plat1X + Plat1W;
            LPlat1 = Plat1X;
            UPlat1 = Plat1Y;
            DPlat1 = Plat1Y + Plat1H;
            CollisionPlat1 =
                RPlat1 >= LCircle &&
                LPlat1 <= RCircle &&
                UPlat1 <= DCircle &&
                DPlat1 >= UCircle;

            RObst = ObstX + ObstW;
            LObst = ObstX;
            UObst = ObstY;
            DObst = ObstY + ObstH;
            ObstCollision =
                RObst >= LCircle &&
                LObst <= RCircle &&
                UObst <= DCircle &&
                DObst >= UCircle;

            RObst1 = Obst1X + Obst1W;
            LObst1 = Obst1X;
            UObst1 = Obst1Y;
            DObst1 = Obst1Y + Obst1H;
            Obst1Collision =
                RObst1 >= LCircle &&
                LObst1 <= RCircle &&
                UObst1 <= DCircle &&
                DObst1 >= UCircle;

            RObst2 = Obst2X + Obst2W;
            LObst2 = Obst2X;
            UObst2 = Obst2Y;
            DObst2 = Obst2Y + Obst2H;
            Obst2Collision =
                RObst2 >= LCircle &&
                LObst2 <= RCircle &&
                UObst2 <= DCircle &&
                DObst2 >= UCircle;

            RObst3 = Obst3X + Obst3W;
            LObst3 = Obst3X;
            UObst3 = Obst3Y;
            DObst3 = Obst3Y + Obst3H;
            ObstCollision =
                RObst3 >= LCircle &&
                LObst3 <= RCircle &&
                UObst3 <= DCircle &&
                DObst3 >= UCircle;

            RObst4 = Obst4X + Obst4W;
            LObst4 = Obst4X;
            UObst4 = Obst4Y;
            DObst4 = Obst4Y + Obst4H;
            Obst4Collision =
                RObst4 >= LCircle &&
                LObst4 <= RCircle &&
                UObst4 <= DCircle &&
                DObst4 >= UCircle;

            RObst5 = Obst5X + Obst5W;
            LObst5 = Obst5X;
            UObst5 = Obst5Y;
            DObst5 = Obst5Y + Obst5H;
            Obst5Collision =
                RObst5 >= LCircle &&
                LObst5 <= RCircle &&
                UObst5 <= DCircle &&
                DObst5 >= UCircle;

            RObst6 = Obst6X + Obst6W;
            LObst6 = Obst6X;
            UObst6 = Obst6Y;
            DObst6 = Obst6Y + Obst6H;
            Obst6Collision =
                RObst6 >= LCircle &&
                LObst6 <= RCircle &&
                UObst6 <= DCircle &&
                DObst6 >= UCircle;

            LCoinBox = CoinBoxX;
            RCoinBox = CoinBoxX + CoinBoxLength;
            UCoinBox = CoinBoxY;
            DCoinBox = CoinBoxY + CoinBoxLength;
            CoinBoxCollision =
                RCoinBox >= LCircle &&
                LCoinBox <= RCircle &&
                UCoinBox <= DCircle &&
                DCoinBox >= UCircle;

            EdgeSup = EdgeSupY + EdgeSupH;
            CollisionEdgeSup = EdgeSup >= UCircle;
            EdgeInf = EdgeInfY;
            CollisionEdgeInf = EdgeInf <= DCircle;
            EdgeSx = EdgeSxX + EdgeSxW;
            CollisionEdgeSx = EdgeSx >= LCircle;
            EdgeDx = EdgeDxX;
            CollisionEdgeDx = EdgeDx <= RCircle;

            // Draw the Circle (player_pawn)
            DrawCircleGradient(CircleX, CircleY, CircleRadius, SKYBLUE, DARKBLUE);

            // Draw the Axes (red squares)
            DrawRectangleGradientH(AxeX, AxeY, AxeLength, AxeLength, PINK, MAROON);     // Axe
            DrawRectangleGradientH(Axe1X, Axe1Y, Axe1Length, Axe1Length, PINK, MAROON); // Axe1
            DrawRectangleGradientH(Axe2X, Axe2Y, Axe2Length, Axe2Length, PINK, MAROON); // Axe2

            // Draw the Platforms (green rectangles)
            DrawRectangleGradientV(PlatX, PlatY, PlatW, PlatH, PINK, MAROON);     // Plat
            DrawRectangleGradientV(Plat1X, Plat1Y, Plat1W, Plat1H, PINK, MAROON); // Plat1

            // Draw the Map's Edges (brown edges)
            DrawRectangle(EdgeSupX, EdgeSupY, EdgeSupW, EdgeSupH, DARKPURPLE); // EdgeSup
            DrawRectangle(EdgeInfX, EdgeInfY, EdgeInfW, EdgeInfH, DARKPURPLE); // EdgeInf
            DrawRectangle(EdgeSxX, EdgeSxY, EdgeSxW, EdgeSxH, DARKPURPLE);     // EdgeSx
            DrawRectangle(EdgeDxX, EdgeDxY, EdgeDxW, EdgeDxH, DARKPURPLE);     // EdgeDx

            // Draw the Map's Obstacles (brown obstacles)
            DrawRectangle(ObstX, ObstY, ObstW, ObstH, DARKPURPLE);
            DrawRectangle(Obst1X, Obst1Y, Obst1W, Obst1H, DARKPURPLE);
            DrawRectangle(Obst2X, Obst2Y, Obst2W, Obst2H, DARKPURPLE);
            DrawRectangle(Obst3X, Obst3Y, Obst3W, Obst3H, DARKPURPLE);
            DrawRectangle(Obst4X, Obst4Y, Obst4W, Obst4H, DARKPURPLE);
            DrawRectangle(Obst5X, Obst5Y, Obst5W, Obst5H, DARKPURPLE);
            DrawRectangle(Obst6X, Obst6Y, Obst6W, Obst6H, DARKPURPLE);

            // Draw the Coin (yellow polygon)
            DrawRectangle(CoinBoxX, CoinBoxY, CoinBoxLength, CoinBoxLength, BLACK); // CoinBox
            DrawPoly((Vector2){CoinX, CoinY}, 6, CoinDim, Rotation, YELLOW);        // Coin

            // Set Axes' Movements
            AxeY += DirAxe;
            if (AxeY > (Height - AxeLength) || AxeY < 0) // Axe
            {
                DirAxe = -DirAxe;
            }
            Axe1Y += DirAxe1;
            if (Axe1Y > (Height - Axe1Length) || Axe1Y < 0) // Axe1
            {
                DirAxe1 = -DirAxe1;
            }
            Axe2Y += DirAxe2;
            if (Axe2Y > (Height - Axe2Length) || Axe2Y < 0) // Axe2
            {
                DirAxe2 = -DirAxe2;
            }

            // Set Platform's Movements
            PlatX += DirPlat;
            if (PlatX > (Width - PlatW) || PlatX < 0)
            {
                DirPlat = -DirPlat;
            }
            Plat1X += DirPlat1;
            if (Plat1X > (Width - Plat1W) || Plat1X < 0)
            {
                DirPlat1 = -DirPlat1;
            }

            // Set Circle's Impunts
            if (IsKeyDown(KEY_D) && CircleX < Width)
            {
                CircleX += 8;
            }
            if (IsKeyDown(KEY_A) && CircleX > 0)
            {
                CircleX -= 8;
            }
            if (IsKeyDown(KEY_S) && CircleY < Height)
            {
                CircleY += 8;
            }
            if (IsKeyDown(KEY_W) && CircleY > 0)
            {
                CircleY -= 8;
            }
        }

        EndDrawing();
    }
}