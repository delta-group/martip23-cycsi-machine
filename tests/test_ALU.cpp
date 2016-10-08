#include "catch.hpp"
#include "ALU.h"

TEST_CASE( "ALU", "ALU" ){
    ALU  alu;
    REQUIRE( alu.add(1,1) == 2 );
}
