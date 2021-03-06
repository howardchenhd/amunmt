#pragma once

#include <memory>

#include "god.h"
#include "sentence.h"
#include "history.h"

class Search {
  private:
    std::vector<ScorerPtr> scorers_;
    Words filterIndices_;

  public:
    Search(size_t threadId);
    
    History Decode(const Sentence& sentence);

};
