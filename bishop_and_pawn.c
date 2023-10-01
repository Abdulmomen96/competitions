bool solution(string bishop, string pawn) {
    
    int rel_x = abs(bishop[0] - pawn[0]);
    int rel_y = abs(bishop[1] - pawn[1]);
    cout << rel_x << rel_y;
    return rel_x == rel_y;

}
