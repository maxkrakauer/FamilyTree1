/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "FamilyTree.hpp"
using namespace family;

#include <string>
using namespace std;



TEST_CASE("Family of Jim") {
    family::Tree T("jim");
    CHECK(T.relation("sam") == string("sam"));
    CHECK(T.relation("sam") == string("sam"));
    CHECK(T.relation("sam") == string("sam"));
    CHECK(T.relation("sam") == string("sam"));
}

/* Add more test cases here */
/*
CHECK_THROWS(find(text,"forbeav"));
*/


/*

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
   
}

*/