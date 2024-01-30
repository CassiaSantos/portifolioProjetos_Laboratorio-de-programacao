public class Produto implements Serializable {
  private Long idProduto;
  private String nomeProduto;
  private String categoriaProduto;
  private double valorProduto;

  //Método Construtor
  public Produto(String nomeProduto, String categoriaProduto, double valorProduto) {
    this.idProduto = null;
    this.nomeProduto = nomeProduto;
    this.categoriaProduto = categoriaProduto;
    this.valorProduto = valorProduto;
  }

  // Métodos acessores
  public Long getIdProduto() {
    return this.idProduto;
  }

  public void setIdProduto(Long idProduto) {
    this.idProduto = idProduto;
  }

  public String getNomeProduto() {
    return this.nomeProduto;
  }

  public void setNomeProduto(String nomeProduto) {
    this.nomeProduto = nomeProduto;
  }

  public String getCategoriaProduto() {
    return this.categoriaProduto;
  }

  public void setCategoriaProduto(String categoriaProduto) {
    this.categoriaProduto = categoriaProduto;
  }

  public double getValorProduto() {
    return this.valorProduto;
  }

  public void setValorProduto(double valorProduto) {
    this.valorProduto = valorProduto;
  }

}