#pragma once
#include "Renderer.h"


class VertexBuffer {
private:
  unsigned int m_RendererID;

public:
  void Bind() const;
  void UnBind() const;

  VertexBuffer(const void* data, const unsigned int size);
  ~VertexBuffer();
};
