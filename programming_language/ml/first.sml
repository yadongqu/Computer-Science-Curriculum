(* this is a comment. This is our first program *)

val x = 34;
(* static environment: x : int *)
(* dynamic environment: x --> 34 *)
val y = 17;
(* static environment: x : int, y : int *)
(* dynamic environment: x --> 34, y-->17 *)
val z = (x + y);
(* static environment: x : int , y : int , z: int *)

val abs_of_z = if z > 0 then 0 - z else z;

val abs_of_z_simpler = abs z;
