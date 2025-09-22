int solution(int n, int w, int num) {
   
    int row = (num - 1) / w;

    int col;
    if (row % 2 == 0) {                 
        col = (num - 1) % w;
    } else {                            
        col = w - 1 - ((num - 1) % w);
    }

    int total_boxes = 0;

   
    for (int r = row; r <= (n - 1) / w; ++r) {
        int box_num;
        if (r % 2 == 0) {               
            box_num = r * w + (col + 1);
        } else {                        
            box_num = r * w + (w - col);
        }
        if (box_num > n) break;        
        ++total_boxes;
    }

    return total_boxes;
}
