#pragma once

#include "common/rc.h"

class SQLStageEvent;

/**
 * @brief 描述表的执行器
 * @ingroup Executor
 */

class DescTableExecutor
{
public:
  DescTableExecutor() = default;
  virtual ~DescTableExecutor() = default;

  RC execute(SQLStageEvent *sql_event);
};