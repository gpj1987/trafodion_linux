#pragma once
#include <iostream>
#include <sql.h>
#include <sqlext.h>
#include <stdio.h>
#include <string.h>
#include "RowBean.h"
using namespace std;
#define ROW_ARRAY_SIZE 1000
class ODBCDao
{
public:
	char* szDSN ;
	char* szUID ;//log name
	char* szAuthStr ;//passward
	SQLHENV  henv ;//���廷�����
	SQLHDBC  hdbc1 ;//�������ݿ����Ӿ��    
	SQLHSTMT  hstmt1 ;//���������
	RETCODE retcode;//���󷵻���
	ODBCDao(void);
	~ODBCDao(void);
	int insertInto(RowBean *bean);
	int getConn(void);
	int insertBulkInto(RowBean *bean);
	int insertbulkParamInto(RowBean *bean);
};

