namespace GildedRoseDataBinding.Model
{
    public class EnchantedStrategy : IUpdateArticleStrategy
    {
        public void UpdateArticle(Article article)
        {
            article.Durability--;

            var wertF�rQualit�t = article.Durability <= 0 ? 4 : 2;
            article.Quality -= wertF�rQualit�t;
        }
    }
}