# OOP Exercise - Google Test

## 使用方法

關於 cmake、google test、gcov、lcov 的流程與使用方法，請參照 TA 課程簡報，與 https://github.com/oopnccucs/oop24-unittest-example 中的說明

## 練習內容

在 `src` 目錄中含有 `sphere` 物件的宣告及實作，但是這個程式碼中有一些邏輯錯誤，請各位完成以下步驟：
1. 編寫 unittest 使 sphere 程式碼覆蓋率達到 80% 以上
2. 修改 `sphere.cpp` 程式碼，使程式的邏輯完全正確
3. 本次 exercise 請繳交至 moodle 作業繳交區。

## 附錄

### GTest 指令

  | `ASSERT` 類 | `EXPECT` 類 | 說明 
-|-|-
`ASSERT_TRUE(condition)` | `EXPECT_TRUE(condition)` | 檢查是否為真
`ASSERT_FALSE(condition)` | `EXPECT_FALSE(condition)` | 檢查是否為假
`ASSERT_EQ(expected,actual)` | `EXPECT_EQ(expected,actual)` | 檢查數值是否相等
`ASSERT_NE(val1,val2)` | `EXPECT_NE(val1,val2)` | 檢查數值是否不相等
`ASSERT_LT(val1,val2)` | `EXPECT_LT(val1,val2)` | val1 < val2
`ASSERT_LE(val1,val2)` | `EXPECT_LE(val1,val2)` | val1 <= val2
`ASSERT_GT(val1,val2)` | `EXPECT_GT(val1,val2)` | val1 > val2
`ASSERT_GE(val1,val2)` | `EXPECT_GE(val1,val2)` | val1 >= val2
`ASSERT_STREQ(str1,str2)` | `EXPECT_STREQ(str1,str2)` | 檢查字串是否相等
`ASSERT_STRNE(str1,str2)` | `EXPECT_STRNE(str1,str2)` | 檢查字串是否不相等
`ASSERT_STRCASEEQ(str1,str2)` |`EXPECT_STRCASEEQ(str1,str2)` | 檢查字串是否相等（不分大小寫）
`ASSERT_STRCASENE(str1,str2)` | `EXPECT_STRCASENE(str1,str2)` | 檢查字串是否不相等（不分大小寫）